#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <QDebug>
#include <QTimer>
#include <QSignalMapper>
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}

class Listener : public QThread
{
    Q_OBJECT

signals:
    void on_overflow(int vm, bool trx, int par);

protected:
    void run();
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void schedule();
    Listener *lis;
    QTimer *pinback1, *pinback2, *pinback3, *return_zero;
    QTcpSocket *sock;

private slots:
    void update(int vm, bool trx, int par);
    void schedule(int i);
    void pin_all_to_zero();
    void init();
    void bind(int i);
    void return_zero_slot();
};

#endif // MAINWINDOW_H
