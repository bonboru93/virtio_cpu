#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x7c52e7f8, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x3d7a35bb, __VMLINUX_SYMBOL_STR(vhost_dev_check_owner) },
	{ 0x8f9de891, __VMLINUX_SYMBOL_STR(vhost_init_used) },
	{ 0xf5d3df4d, __VMLINUX_SYMBOL_STR(vhost_poll_start) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xff21cdbf, __VMLINUX_SYMBOL_STR(vhost_dev_cleanup) },
	{ 0x271998ab, __VMLINUX_SYMBOL_STR(vhost_log_access_ok) },
	{ 0xe3964419, __VMLINUX_SYMBOL_STR(vhost_enable_notify) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7307067b, __VMLINUX_SYMBOL_STR(vhost_dev_has_owner) },
	{ 0x94affa40, __VMLINUX_SYMBOL_STR(vhost_poll_flush) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xdaa1b895, __VMLINUX_SYMBOL_STR(vhost_disable_notify) },
	{ 0xf23b2e74, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x7c223dfe, __VMLINUX_SYMBOL_STR(vhost_dev_ioctl) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd36257ba, __VMLINUX_SYMBOL_STR(memcpy_toiovecend) },
	{ 0xcb8a490a, __VMLINUX_SYMBOL_STR(vhost_log_write) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1cbe4343, __VMLINUX_SYMBOL_STR(vhost_get_vq_desc) },
	{ 0x8e07ec8e, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x3a05bc49, __VMLINUX_SYMBOL_STR(vhost_dev_set_owner) },
	{ 0x1a6f3d52, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal_n) },
	{ 0x269f7a09, __VMLINUX_SYMBOL_STR(vhost_dev_reset_owner_prepare) },
	{ 0x76bcc79d, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x8ba527df, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal) },
	{ 0xa5c5d07, __VMLINUX_SYMBOL_STR(vhost_discard_vq_desc) },
	{ 0xc59d03df, __VMLINUX_SYMBOL_STR(tun_get_socket) },
	{ 0x69b64a42, __VMLINUX_SYMBOL_STR(vhost_poll_queue) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xd914286e, __VMLINUX_SYMBOL_STR(vhost_poll_stop) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0xbaf84105, __VMLINUX_SYMBOL_STR(vhost_poll_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9f17569e, __VMLINUX_SYMBOL_STR(vhost_dev_reset_owner) },
	{ 0xe3cc7421, __VMLINUX_SYMBOL_STR(vhost_dev_init) },
	{ 0x9185525, __VMLINUX_SYMBOL_STR(fget) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x68ec6ce2, __VMLINUX_SYMBOL_STR(vhost_dev_stop) },
	{ 0x43d83a31, __VMLINUX_SYMBOL_STR(vhost_vq_access_ok) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x5692dd78, __VMLINUX_SYMBOL_STR(vhost_vring_ioctl) },
	{ 0xa1012e43, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xc9bf2a38, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0x675f2bbf, __VMLINUX_SYMBOL_STR(macvtap_get_socket) },
	{ 0x9c7c731b, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vhost,tun,macvtap";


MODULE_INFO(srcversion, "95895CE118794AEAF113FBB");
MODULE_INFO(rhelversion, "7.2");
