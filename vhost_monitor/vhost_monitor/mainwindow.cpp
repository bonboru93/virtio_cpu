#include "mainwindow.h"
#include "ui_mainwindow.h"

#define TX_THRESHOLD 85
#define GREEN "color:rgb(0,255,0)"
#define RED "color:rgb(255,0,0)"

int pipe_fd;
int vm_id_map[100] = {0};
int vm_reply_count[100];
int active_vm_id;

void Listener::run()
{
    char buf[5];
    int vm_id;
    while(read(pipe_fd, buf, 5))
    {
        vm_id = 10*(buf[0]-'0')+buf[1]-'0';
        if (!vm_id_map[vm_id])
        {
            qDebug() << vm_id <<endl;
            vm_reply_count[vm_id]++;
            if ((active_vm_id == -1)||(vm_reply_count[vm_id] > vm_reply_count[active_vm_id])) active_vm_id = vm_id;
        }
        else
            emit on_overflow(vm_id_map[vm_id], buf[2]-'0', 10*(buf[3]-'0')+buf[4]-'0');
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    lis = new Listener();
    connect(lis, SIGNAL(on_overflow(int, bool, int)), this, SLOT(update(int, bool, int)));

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(pin_all_to_zero()));

    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(init()));

    QSignalMapper *bind_sigmap = new QSignalMapper();

    connect(ui->pushButton_3, SIGNAL(clicked()), bind_sigmap, SLOT(map()));
    bind_sigmap->setMapping(ui->pushButton_3, 1);
    connect(ui->pushButton_4, SIGNAL(clicked()), bind_sigmap, SLOT(map()));
    bind_sigmap->setMapping(ui->pushButton_4, 2);
    connect(ui->pushButton_5, SIGNAL(clicked()), bind_sigmap, SLOT(map()));
    bind_sigmap->setMapping(ui->pushButton_5, 3);
    connect(bind_sigmap, SIGNAL(mapped(int)), this, SLOT(bind(int)));

    QSignalMapper *pin_sigmap = new QSignalMapper();
    pinback1 = new QTimer();
        connect(pinback1, SIGNAL(timeout()), pin_sigmap, SLOT(map()));
        pin_sigmap->setMapping(pinback1, 10);
    pinback2 = new QTimer();
        connect(pinback2, SIGNAL(timeout()), pin_sigmap, SLOT(map()));
        pin_sigmap->setMapping(pinback2, 20);
    pinback3 = new QTimer();
        connect(pinback3, SIGNAL(timeout()), pin_sigmap, SLOT(map()));
        pin_sigmap->setMapping(pinback3, 30);
    connect(pin_sigmap, SIGNAL(mapped(int)), this, SLOT(schedule(int)));

    return_zero = new QTimer();
    connect(return_zero, SIGNAL(timeout()), this, SLOT(return_zero_slot()));
    return_zero->start(5000);

    sock = new QTcpSocket();
}

MainWindow::~MainWindow()
{
    delete ui;
    system("rm -rf /tmp/vhost_monitor");
}

void MainWindow::return_zero_slot()
{
    ui->progressBar->setValue(0);
    ui->progressBar->setStyleSheet("");
    ui->label_22->setText("NON");
    ui->label_22->setStyleSheet("");

    ui->progressBar_2->setValue(0);
    ui->progressBar_2->setStyleSheet("");
    ui->label_23->setText("NON");
    ui->label_23->setStyleSheet("");

    ui->progressBar_3->setValue(0);
    ui->progressBar_3->setStyleSheet("");
    ui->label_24->setText("NON");
    ui->label_24->setStyleSheet("");
}

void MainWindow::schedule(int i)
{
    switch (i)
    {
        case 10:
    {
        system("virsh vcpupin iperf1 0 0");
        system("virsh vcpupin iperf1 1 0");
        ui->label_10->setText("NORMAL");
        ui->label_10->setStyleSheet(GREEN);
        pinback1->stop();
        break;
    }
        case 20:
    {
        system("virsh vcpupin iperf2 0 0");
        system("virsh vcpupin iperf2 1 0");
        ui->label_11->setText("NORMAL");
        ui->label_11->setStyleSheet(GREEN);
        pinback2->stop();
        break;
    }
       case 30:
    {
        system("virsh vcpupin iperf3 0 0");
        system("virsh vcpupin iperf3 1 0");
        ui->label_12->setText("NORMAL");
        ui->label_12->setStyleSheet(GREEN);
        pinback3->stop();
        break;
    }
        case 11:
    {
        system("virsh vcpupin iperf1 0 0-3");
        system("virsh vcpupin iperf1 1 0-3");
        ui->label_10->setText("SCHED");
        ui->label_10->setStyleSheet(RED);
        pinback1->start(3000);
        break;
    }
        case 21:
    {
        system("virsh vcpupin iperf2 0 0-3");
        system("virsh vcpupin iperf2 1 0-3");
        ui->label_11->setText("SCHED");
        ui->label_11->setStyleSheet(RED);
        pinback2->start(3000);
        break;
    }
        case 31:
    {
        system("virsh vcpupin iperf3 0 0-3");
        system("virsh vcpupin iperf3 1 0-3");
        ui->label_12->setText("SCHED");
        ui->label_12->setStyleSheet(RED);
        pinback3->start(3000);
        break;
    }
    }
}

void MainWindow::update(int vm, bool trx, int par)
{
    qDebug() << vm << trx  << par << endl;
    switch (vm)
    {
        case 1:
    {
        if (!trx)
        {
            ui->progressBar->setValue(par);
            ui->progressBar->setStyleSheet("");
            if (par > TX_THRESHOLD)
            {
                ui->progressBar->setStyleSheet(RED);
                schedule(11);
            }
        }
        else
        {
            ui->label_22->setText("DETECTED");
            ui->label_22->setStyleSheet(RED);
            schedule(11);
        }
        break;
    }
        case 2:
    {
        if (!trx)
        {
            ui->progressBar_2->setValue(par);
            ui->progressBar_2->setStyleSheet("");
            if (par > TX_THRESHOLD)
            {
                ui->progressBar_2->setStyleSheet(RED);
                schedule(21);
            }
        }
        else
        {
            ui->label_23->setText("DETECTED");
            ui->label_23->setStyleSheet(RED);
            schedule(21);
        }
        break;
    }
        case 3:
    {
        if (!trx)
        {
            ui->progressBar_3->setValue(par);
            ui->progressBar_3->setStyleSheet("");
            if (par > TX_THRESHOLD)
            {
                ui->progressBar_3->setStyleSheet(RED);
                schedule(31);
            }
        }
        else
        {
            ui->label_24->setText("DETECTED");
            ui->label_24->setStyleSheet(RED);
            schedule(31);
        }
        break;
    }
    }
}

void MainWindow::pin_all_to_zero()
{
    schedule(10);
    schedule(20);
    schedule(30);
    system("virsh vcpupin sysbench1 0 0");
    system("virsh vcpupin sysbench1 1 0");
    system("virsh vcpupin sysbench2 0 0");
    system("virsh vcpupin sysbench2 1 0");
    system("virsh vcpupin sysbench3 0 0");
    system("virsh vcpupin sysbench3 1 0");
    ui->label_21->setText("All vCPUs reallocated to CPU0");
}

void MainWindow::init()
{
    system("rm -rf /tmp/vhost_monitor");
    if (0 != mkfifo("/tmp/vhost_monitor", 0777))
    {
        ui->label_21->setText("Cannot establish FIFO tunnel");
        return;
    }
    pipe_fd = open("/tmp/vhost_monitor", O_RDONLY);
    lis->start();
    ui->label_21->setText("Listener thread started");
    ui->pushButton_2->setEnabled(false);
    ui->pushButton->setEnabled(true);
}

void MainWindow::bind(int i)
{
    QString cmd = "ping -f -c 1000 ";
    QPushButton *btn;
    QLineEdit *edt;
    QLabel *lab;
    switch (i)
    {
        case 1:
    {
        btn = ui->pushButton_3;
        edt = ui->lineEdit;
        lab = ui->label_10;
        break;
    }
        case 2:
    {
        btn = ui->pushButton_4;
        edt = ui->lineEdit_2;
        lab = ui->label_11;
        break;
    }
        case 3:
    {
        btn = ui->pushButton_5;
        edt = ui->lineEdit_3;
        lab = ui->label_12;
        break;
    }
    }
    sock->abort();
    sock->connectToHost(edt->text(), 22);
    if (!sock->waitForConnected(500))
    {
        ui->label_21->setText("Target unreachable");
        return;
    }
    active_vm_id = -1;
    memset(vm_reply_count, 0, sizeof(int)*100);
    cmd.append(edt->text());
    system(QByteArray(cmd.toLatin1()).data());
    sleep(2);
    if (active_vm_id < 0)
    {
        ui->label_21->setText("Please try again");
        return;
    }
    vm_id_map[active_vm_id] = i;
    ui->label_21->setText("Target binded");
    btn->setEnabled(false);
    edt->setEnabled(false);
    lab->setText("ON");
    lab->setStyleSheet(GREEN);
}
