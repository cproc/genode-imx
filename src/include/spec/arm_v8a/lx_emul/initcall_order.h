/*
 * \brief  Array defining order of Linux Kernel initcalls
 * \author Automatically generated file - do no edit
 * \date   2023-05-24
 */

#pragma once

static const char * lx_emul_initcall_order[] = {
	"__initcall_asids_initearly",
	"__initcall_start",
	"__initcall_spawn_ksoftirqdearly",
	"__initcall_migration_initearly",
	"__initcall_srcu_bootup_announceearly",
	"__initcall_rcu_spawn_gp_kthreadearly",
	"__initcall_check_cpu_stall_initearly",
	"__initcall_rcu_sysrq_initearly",
	"__initcall_cpu_stop_initearly",
	"__initcall_irq_work_init_threadsearly",
	"__initcall_init_zero_pfnearly",
	"__initcall_init_fs_inode_sysctlsearly",
	"__initcall_init_fs_locks_sysctlsearly",
	"__initcall_its_pmsi_initearly",
	"__initcall_its_pci_msi_initearly",
	"__initcall_dummy_timer_registerearly",
	"__initcall_init_mmap_min_addr0",
	"__initcall_pci_realloc_setup_params0",
	"__initcall_inet_frag_wq_init0",
	"__initcall_fpsimd_init1",
	"__initcall_enable_mrs_emulation1",
	"__initcall_init_amu_fie1",
	"__initcall_wq_sysfs_init1",
	"__initcall_ksysfs_init1",
	"__initcall_pm_init1",
	"__initcall_rcu_set_runtime_mode1",
	"__initcall_init_jiffies_clocksource1",
	"__initcall_cma_init_reserved_areas1",
	"__initcall_filelock_init1",
	"__initcall_init_script_binfmt1",
	"__initcall_init_elf_binfmt1",
	"__initcall_pinctrl_init1",
	"__initcall_gpiolib_dev_init1",
	"__initcall_fsl_guts_init1",
	"__initcall_regulator_init1",
	"__initcall_genpd_bus_init1",
	"__initcall_soc_bus_register1",
	"__initcall_free_raw_capacity1",
	"__initcall_sock_init1",
	"__initcall_net_inuse_init1",
	"__initcall_net_defaults_init1",
	"__initcall_init_default_flow_dissectors1",
	"__initcall_netlink_proto_init1",
	"__initcall_genl_init1",
	"__initcall_debug_monitors_init2",
	"__initcall_irq_sysfs_init2",
	"__initcall_dma_atomic_pool_init2",
	"__initcall_bdi_class_init2",
	"__initcall_mm_sysfs_init2",
	"__initcall_init_per_zone_wmark_min2",
	"__initcall_mpi_init2",
	"__initcall_pcibus_class_init2",
	"__initcall_pci_driver_init2",
	"__initcall_backlight_class_init2",
	"__initcall_amba_init2",
	"__initcall_anatop_regulator_init2",
	"__initcall_tty_class_init2",
	"__initcall_vtconsole_class_init2",
	"__initcall_mipi_dsi_bus_init2",
	"__initcall_devlink_class_init2",
	"__initcall_software_node_init2",
	"__initcall_regmap_initcall2",
	"__initcall_syscon_init2",
	"__initcall_i2c_init2",
	"__initcall_thermal_init2",
	"__initcall_kobject_uevent_init2",
	"__initcall_reserve_memblock_reserved_regions3",
	"__initcall_vdso_init3",
	"__initcall_adjust_protection_map3",
	"__initcall_asids_update_limit3",
	"__initcall_kcmp_cookies_init3",
	"__initcall_cryptomgr_init3",
	"__initcall_imx8mq_pinctrl_init3",
	"__initcall_dma_channel_table_init3",
	"__initcall_dma_bus_init3",
	"__initcall_of_platform_default_populate_init3s",
	"__initcall_topology_init4",
	"__initcall_uid_cache_init4",
	"__initcall_param_sysfs_init4",
	"__initcall_user_namespace_sysctl_init4",
	"__initcall_oom_init4",
	"__initcall_default_bdi_init4",
	"__initcall_percpu_enable_async4",
	"__initcall_init_user_reserve4",
	"__initcall_init_admin_reserve4",
	"__initcall_init_reserve_notifier4",
	"__initcall_swap_init_sysfs4",
	"__initcall_swapfile_init4",
	"__initcall_rsa_init4",
	"__initcall_crypto_cmac_module_init4",
	"__initcall_crypto_null_mod_init4",
	"__initcall_sha256_generic_mod_init4",
	"__initcall_crypto_ctr_module_init4",
	"__initcall_crypto_gcm_module_init4",
	"__initcall_crypto_ccm_module_init4",
	"__initcall_aes_init4",
	"__initcall_ghash_mod_init4",
	"__initcall_init_bio4",
	"__initcall_blk_ioc_init4",
	"__initcall_blk_mq_init4",
	"__initcall_genhd_device_init4",
	"__initcall_gpio_mxc_init4",
	"__initcall_pwm_sysfs_init4",
	"__initcall_pci_slot_init4",
	"__initcall_fbmem_init4",
	"__initcall_ipu_init4",
	"__initcall_regulator_fixed_voltage_init4",
	"__initcall_gpio_regulator_init4",
	"__initcall_misc_init4",
	"__initcall_dp_aux_bus_init4",
	"__initcall_register_cpu_capacity_sysctl4",
	"__initcall_dma_buf_init4",
	"__initcall_phy_init4",
	"__initcall_usb_common_init4",
	"__initcall_usb_init4",
	"__initcall_serio_init4",
	"__initcall_input_init4",
	"__initcall_i2c_adap_imx_init4",
	"__initcall_cec_devnode_init4",
	"__initcall_pps_init4",
	"__initcall_ptp_init4",
	"__initcall_power_supply_class_init4",
	"__initcall_mmc_init4",
	"__initcall_leds_init4",
	"__initcall_nvmem_init4",
	"__initcall_mux_init4",
	"__initcall_init_soundcore4",
	"__initcall_alsa_sound_init4",
	"__initcall_imx_audmux_init4",
	"__initcall_proto_init4",
	"__initcall_net_dev_init4",
	"__initcall_neigh_init4",
	"__initcall_fib_notifier_init4",
	"__initcall_ethnl_init4",
	"__initcall_nexthop_init4",
	"__initcall_wireless_nlevent_init4",
	"__initcall_ieee80211_init4",
	"__initcall_rfkill_init4",
	"__initcall_vsprintf_init_hashval4",
	"__initcall_init_32bit_el0_mask4s",
	"__initcall_vga_arb_device_init4s",
	"__initcall_create_debug_debugfs_entry5",
	"__initcall_iomem_init_inode5",
	"__initcall_clocksource_done_booting5",
	"__initcall_init_fs_stat_sysctls5",
	"__initcall_init_fs_exec_sysctls5",
	"__initcall_init_pipe_fs5",
	"__initcall_init_fs_namei_sysctls5",
	"__initcall_init_fs_dcache_sysctls5",
	"__initcall_init_fs_namespace_sysctls5",
	"__initcall_anon_inode_init5",
	"__initcall_proc_locks_init5",
	"__initcall_proc_cmdline_init5",
	"__initcall_proc_consoles_init5",
	"__initcall_proc_cpuinfo_init5",
	"__initcall_proc_devices_init5",
	"__initcall_proc_interrupts_init5",
	"__initcall_proc_loadavg_init5",
	"__initcall_proc_meminfo_init5",
	"__initcall_proc_stat_init5",
	"__initcall_proc_uptime_init5",
	"__initcall_proc_version_init5",
	"__initcall_proc_softirqs_init5",
	"__initcall_proc_kmsg_init5",
	"__initcall_proc_page_init5",
	"__initcall_init_ramfs_fs5",
	"__initcall_chr_dev_init5",
	"__initcall_firmware_class_init5",
	"__initcall_sysctl_core_init5",
	"__initcall_eth_offload_init5",
	"__initcall_ipv4_offload_init5",
	"__initcall_inet_init5",
	"__initcall_af_unix_init5",
	"__initcall_ipv6_offload_init5",
	"__initcall_cfg80211_init5",
	"__initcall_pci_apply_final_quirks5s",
	"__initcall_populate_rootfsrootfs",
	"__initcall_register_arm64_panic_block6",
	"__initcall_cpuinfo_regs_init6",
	"__initcall_aarch32_el0_sysfs_init6",
	"__initcall_proc_execdomains_init6",
	"__initcall_ioresources_init6",
	"__initcall_irq_gc_init_ops6",
	"__initcall_timer_sysctl_init6",
	"__initcall_timekeeping_init_ops6",
	"__initcall_init_clocksource_sysfs6",
	"__initcall_init_timer_list_procfs6",
	"__initcall_alarmtimer_init6",
	"__initcall_init_posix_timers6",
	"__initcall_clockevents_init_sysfs6",
	"__initcall_sched_clock_syscore_init6",
	"__initcall_utsname_sysctl_init6",
	"__initcall_system_trusted_keyring_init6",
	"__initcall_kswapd_init6",
	"__initcall_mm_compute_batch_init6",
	"__initcall_workingset_init6",
	"__initcall_proc_vmalloc_init6",
	"__initcall_procswaps_init6",
	"__initcall_fcntl_init6",
	"__initcall_proc_filesystems_init6",
	"__initcall_start_dirtytime_writeback6",
	"__initcall_dio_init6",
	"__initcall_init_devpts_fs6",
	"__initcall_key_proc_init6",
	"__initcall_asymmetric_key_init6",
	"__initcall_x509_key_init6",
	"__initcall_blkdev_init6",
	"__initcall_proc_genhd_init6",
	"__initcall_deadline_init6",
	"__initcall_kyber_init6",
	"__initcall_blake2s_mod_init6",
	"__initcall_percpu_counter_startup6",
	"__initcall_imx_irqsteer_driver_init6",
	"__initcall_imx_intmux_driver_init6",
	"__initcall_imx_mu_msi_driver_init6",
	"__initcall_simple_pm_bus_driver_init6",
	"__initcall_phy_core_init6",
	"__initcall_imx8mq_usb_phy_driver_init6",
	"__initcall_mixel_lvds_phy_driver_init6",
	"__initcall_mixel_dphy_driver_init6",
	"__initcall_imx8_pcie_phy_driver_init6",
	"__initcall_vf610_gpio_driver_init6",
	"__initcall_imx_pwm_driver_init6",
	"__initcall_pci_proc_init6",
	"__initcall_dw_plat_pcie_driver_init6",
	"__initcall_imx6_pcie_init6",
	"__initcall_gpio_backlight_driver_init6",
	"__initcall_pwm_backlight_driver_init6",
	"__initcall_led_bl_driver_init6",
	"__initcall_mx3fb_init6",
	"__initcall_of_fixed_factor_clk_driver_init6",
	"__initcall_of_fixed_clk_driver_init6",
	"__initcall_gpio_clk_driver_init6",
	"__initcall_imx8mq_clk_driver_init6",
	"__initcall_sdma_driver_init6",
	"__initcall_imx_pgc_domain_driver_init6",
	"__initcall_imx_gpc_driver_init6",
	"__initcall_imx8_soc_init6",
	"__initcall_imx8m_blk_ctrl_driver_init6",
	"__initcall_imx8mp_blk_ctrl_driver_init6",
	"__initcall_imx93_src_driver_init6",
	"__initcall_imx93_power_domain_driver_init6",
	"__initcall_imx93_blk_ctrl_driver_init6",
	"__initcall_pfuze_driver_init6",
	"__initcall_imx7_reset_driver_init6",
	"__initcall_n_null_init6",
	"__initcall_pty_init6",
	"__initcall_imx_uart_init6",
	"__initcall_random_sysctls_init6",
	"__initcall_drm_core_init6",
	"__initcall_drm_display_helper_module_init6",
	"__initcall_drm_sched_fence_slab_init6",
	"__initcall_dcss_platform_driver_init6",
	"__initcall_cdns_mhdp_imx_platform_driver_init6",
	"__initcall_panel_lvds_driver_init6",
	"__initcall_panel_edp_init6",
	"__initcall_rad_panel_driver_init6",
	"__initcall_lvds_codec_driver_init6",
	"__initcall_simple_bridge_driver_init6",
	"__initcall_ti_sn65dsi86_init6",
	"__initcall_nwl_dsi_driver_init6",
	"__initcall_mhdp_driver_init6",
	"__initcall_etnaviv_init6",
	"__initcall_mxsfb_platform_driver_init6",
	"__initcall_topology_sysfs_init6",
	"__initcall_cacheinfo_sysfs_init6",
	"__initcall_wm8994_i2c_driver_init6",
	"__initcall_nvme_core_init6",
	"__initcall_nvme_init6",
	"__initcall_blackhole_netdev_init6",
	"__initcall_phy_module_init6",
	"__initcall_fixed_mdio_bus_init6",
	"__initcall_mdio_mux_multiplexer_driver_init6",
	"__initcall_fec_driver_init6",
	"__initcall_ath9k_init6",
	"__initcall_ath9k_cmn_init6",
	"__initcall_iwl_drv_init6",
	"__initcall_iwl_init6",
	"__initcall_iwl_mvm_init6",
	"__initcall_rtl_core_module_init6",
	"__initcall_rtl88ee_driver_init6",
	"__initcall_dwc3_driver_init6",
	"__initcall_dwc3_haps_driver_init6",
	"__initcall_dwc3_of_simple_driver_init6",
	"__initcall_dwc3_imx8mp_driver_init6",
	"__initcall_xhci_hcd_init6",
	"__initcall_xhci_pci_init6",
	"__initcall_xhci_plat_init6",
	"__initcall_serport_init6",
	"__initcall_input_leds_init6",
	"__initcall_atkbd_init6",
	"__initcall_lpi2c_imx_driver_init6",
	"__initcall_i2c_mux_reg_driver_init6",
	"__initcall_ptp_kvm_init6",
	"__initcall_mmc_pwrseq_simple_driver_init6",
	"__initcall_mmc_pwrseq_emmc_driver_init6",
	"__initcall_mmc_blk_init6",
	"__initcall_sdhci_drv_init6",
	"__initcall_sdhci_pltfm_drv_init6",
	"__initcall_sdhci_esdhc_imx_driver_init6",
	"__initcall_sdhci_esdhc_driver_init6",
	"__initcall_smccc_devices_init6",
	"__initcall_hid_init6",
	"__initcall_hid_generic_init6",
	"__initcall_hid_init6",
	"__initcall_imx_ocotp_driver_init6",
	"__initcall_mux_mmio_driver_init6",
	"__initcall_icc_init6",
	"__initcall_imx8mq_icc_driver_init6",
	"__initcall_alsa_timer_init6",
	"__initcall_alsa_pcm_init6",
	"__initcall_snd_soc_init6",
	"__initcall_hdmi_codec_driver_init6",
	"__initcall_aic31xx_i2c_driver_init6",
	"__initcall_wm8960_i2c_driver_init6",
	"__initcall_wm8994_codec_driver_init6",
	"__initcall_fsl_audmix_driver_init6",
	"__initcall_fsl_asoc_card_driver_init6",
	"__initcall_fsl_sai_driver_init6",
	"__initcall_fsl_ssi_driver_init6",
	"__initcall_fsl_esai_driver_init6",
	"__initcall_fsl_micfil_driver_init6",
	"__initcall_fsl_aud2htx_driver_init6",
	"__initcall_imx_audmix_driver_init6",
	"__initcall_imx_hdmi_driver_init6",
	"__initcall_sock_diag_init6",
	"__initcall_netlink_diag_init6",
	"__initcall_gre_offload_init6",
	"__initcall_sysctl_ipv4_init6",
	"__initcall_tunnel4_init6",
	"__initcall_inet_diag_init6",
	"__initcall_tcp_diag_init6",
	"__initcall_cubictcp_register6",
	"__initcall_inet6_init6",
	"__initcall_sit_init6",
	"__initcall_packet_init6",
	"__initcall_kernel_do_mounts_initrd_sysctls_init7",
	"__initcall_kernel_panic_sysctls_init7",
	"__initcall_kernel_panic_sysfs_init7",
	"__initcall_kernel_exit_sysctls_init7",
	"__initcall_kernel_exit_sysfs_init7",
	"__initcall_reboot_ksysfs_init7",
	"__initcall_sched_core_sysctl_init7",
	"__initcall_sched_fair_sysctl_init7",
	"__initcall_sched_rt_sysctl_init7",
	"__initcall_sched_dl_sysctl_init7",
	"__initcall_sched_init_debug7",
	"__initcall_printk_late_init7",
	"__initcall_load_system_certificate_list7",
	"__initcall_max_swapfiles_check7",
	"__initcall_check_early_ioremap_leak7",
	"__initcall_init_root_keyring7",
	"__initcall_crypto_algapi_init7",
	"__initcall_blk_timeout_init7",
	"__initcall_pci_resource_alignment_sysfs_init7",
	"__initcall_pci_sysfs_init7",
	"__initcall_sync_state_resume_initcall7",
	"__initcall_deferred_probe_initcall7",
	"__initcall_genpd_power_off_unused7",
	"__initcall_of_fdt_raw_init7",
	"__initcall_tcp_congestion_default7",
	"__initcall_regulatory_init_db7",
	"__initcall_amba_stub_drv_init7s",
	"__initcall_clk_disable_unused7s",
	"__initcall_imx_clk_disable_uart7s",
	"__initcall_regulator_init_complete7s",
	"__initcall_of_platform_sync_state_init7s",
	"__initcall_alsa_sound_last_init7s",
	"__initcall_con_initcon",
	"__initcall_end",
	"END_OF_INITCALL_ORDER_ARRAY_DUMMY_ENTRY"
};