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
	{ 0x306ee7d1, __VMLINUX_SYMBOL_STR(eventfd_ctx_fileget) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x62b1ada0, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x45599a23, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x60b40fd8, __VMLINUX_SYMBOL_STR(copy_user_enhanced_fast_string) },
	{ 0xc35e4b4e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x42f90a31, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xbd67c867, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0xe5772d4a, __VMLINUX_SYMBOL_STR(copy_user_generic_string) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x22e9da91, __VMLINUX_SYMBOL_STR(use_mm) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x76bcc79d, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xf09de776, __VMLINUX_SYMBOL_STR(get_random_int) },
	{ 0xdcc3a419, __VMLINUX_SYMBOL_STR(copy_user_generic_unrolled) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xe65cdceb, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0xe06fb087, __VMLINUX_SYMBOL_STR(eventfd_fget) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd91645cb, __VMLINUX_SYMBOL_STR(cgroup_attach_task_all) },
	{ 0x941f2aaa, __VMLINUX_SYMBOL_STR(eventfd_ctx_put) },
	{ 0x487d9343, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x9031c2c9, __VMLINUX_SYMBOL_STR(unuse_mm) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x31a6c1a4, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "359E3FEC2BCA842EA8BBEAC");
MODULE_INFO(rhelversion, "7.2");
