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
	{ 0x35253f98, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xea35fc6c, "pci_bus_read_config_byte" },
	{ 0x8d195954, "pci_bus_type" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x91bce153, "genl_register_family" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa90c928a, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x12a45be7, "dev_set_drvdata" },
	{ 0x40c3fa1a, "slab_buffer_size" },
	{ 0x3d62319f, "genl_unregister_family" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x115eacfd, "cpu_online_mask" },
	{ 0xec054fde, "dma_set_mask" },
	{ 0x712f236c, "napi_complete" },
	{ 0x76918c6, "malloc_sizes" },
	{ 0x97ab11de, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x20f77d2f, "pci_disable_msix" },
	{ 0x42794e09, "netif_carrier_on" },
	{ 0x87a45ee9, "_raw_spin_lock_bh" },
	{ 0x8f2a5788, "dev_get_by_name" },
	{ 0xac1819b3, "ethtool_op_get_sg" },
	{ 0xf89843f9, "schedule_work" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x4aabc7c4, "__tracepoint_kmalloc" },
	{ 0xaabd4c25, "netif_carrier_off" },
	{ 0x88bfa7e, "cancel_work_sync" },
	{ 0x923390db, "__register_chrdev" },
	{ 0x59b6daef, "x86_dma_fallback_dev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x334f788b, "pci_release_regions" },
	{ 0x34a1448e, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0xe87cf66e, "pci_bus_write_config_word" },
	{ 0x47c7b0d2, "cpu_number" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xe9891a31, "in_dev_finish_destroy" },
	{ 0x32abdcf3, "pci_dev_driver" },
	{ 0xab495fa1, "netif_napi_del" },
	{ 0x7d11c268, "jiffies" },
	{ 0xcd631370, "skb_trim" },
	{ 0x800ea3be, "__netdev_alloc_skb" },
	{ 0x35496caa, "netif_rx" },
	{ 0xe174aa7, "__init_waitqueue_head" },
	{ 0x71de9b3f, "_copy_to_user" },
	{ 0xe505b33b, "pci_set_master" },
	{ 0xf4402931, "del_timer_sync" },
	{ 0xde0bdcff, "memset" },
	{ 0x332026ed, "alloc_etherdev_mq" },
	{ 0xd429018b, "pci_enable_pcie_error_reporting" },
	{ 0x331afd26, "kmem_cache_alloc_notrace" },
	{ 0x3d458c39, "pci_enable_msix" },
	{ 0x71bce62e, "pci_restore_state" },
	{ 0xfbfc7772, "dev_err" },
	{ 0x251680b1, "current_task" },
	{ 0x3de69219, "dev_addr_del" },
	{ 0xc16fe12d, "__memcpy" },
	{ 0xea147363, "printk" },
	{ 0xbb0f0deb, "ethtool_op_get_link" },
	{ 0x2e306346, "ethtool_op_set_flags" },
	{ 0x3de5ffd1, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0x7277330, "register_netdev" },
	{ 0xb9e0457e, "nla_put" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa5eec115, "dev_close" },
	{ 0xcb169d0e, "mod_timer" },
	{ 0x34c3bd86, "netlink_unicast" },
	{ 0x1902adf, "netpoll_trap" },
	{ 0x9d2705b7, "netif_napi_add" },
	{ 0x859c6dc7, "request_threaded_irq" },
	{ 0xde327af9, "device_init_wakeup" },
	{ 0x6c76beb4, "init_net" },
	{ 0xbe956209, "ethtool_op_get_flags" },
	{ 0x60c0fdb8, "dev_kfree_skb_any" },
	{ 0x83d0cfbd, "vm_insert_page" },
	{ 0x311771db, "dev_open" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x99517d14, "netif_device_attach" },
	{ 0xb1f79bc1, "dev_addr_add" },
	{ 0x13e91a33, "pci_disable_link_state" },
	{ 0x618911fc, "numa_node" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x8a0262cf, "netif_device_detach" },
	{ 0xf840ef20, "__alloc_skb" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x9f8cf3d2, "pci_bus_read_config_word" },
	{ 0x87dc39b5, "ethtool_op_set_sg" },
	{ 0xa31ae37e, "__napi_schedule" },
	{ 0x6223cafb, "_raw_spin_unlock_bh" },
	{ 0x2b884faf, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xa58b6804, "nla_parse" },
	{ 0x1000e51, "schedule" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xc2de422f, "eth_type_trans" },
	{ 0x6fa64636, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xa8e8d2cc, "kmem_cache_alloc_node_notrace" },
	{ 0x6443d74d, "_raw_spin_lock" },
	{ 0x3d9f370c, "__tracepoint_kmalloc_node" },
	{ 0xf09c7f68, "__wake_up" },
	{ 0x7715f321, "pci_set_power_state" },
	{ 0xc1888c67, "eth_validate_addr" },
	{ 0x4c7d3333, "pci_disable_pcie_error_reporting" },
	{ 0xc26f41a4, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x6067a146, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x37b4cde7, "pci_request_regions" },
	{ 0xe75663a, "prepare_to_wait" },
	{ 0xd1329880, "param_array_ops" },
	{ 0xf6cf34ca, "pci_disable_msi" },
	{ 0xa4d41e00, "dma_supported" },
	{ 0xedc03953, "iounmap" },
	{ 0x474ed944, "pci_prepare_to_sleep" },
	{ 0x394f9d6d, "__pci_register_driver" },
	{ 0x2288378f, "system_state" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb00ccc33, "finish_wait" },
	{ 0x3e091016, "genl_register_ops" },
	{ 0x4cbbd171, "__bitmap_weight" },
	{ 0x2266e706, "unregister_netdev" },
	{ 0xb3a2d795, "ethtool_op_get_tso" },
	{ 0xc0b4160a, "pci_enable_msi_block" },
	{ 0x3ef8455e, "__netif_schedule" },
	{ 0xda78abd1, "vmalloc_to_page" },
	{ 0x3d31446, "skb_put" },
	{ 0x4e6953d1, "pci_enable_device" },
	{ 0x2aeefec1, "pci_wake_from_d3" },
	{ 0x77e2f33, "_copy_from_user" },
	{ 0xefb96738, "dev_get_drvdata" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x2ce4911, "skb_tx_hash" },
	{ 0x977ea640, "dma_ops" },
	{ 0x13b2b49a, "device_set_wakeup_enable" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x7754ed29, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d000010B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001508sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "930CA35A2C26C1B29B0456C");
