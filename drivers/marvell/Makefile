#
# Makefile for the drivers of Marvell devices.
#
ifeq ($(CONFIG_64BIT), y)
	obj-y += security/mmp-tzdd/src/
else
ifdef CONFIG_TZ_HYPERVISOR
	obj-y += security/mmp-tzdd/src/
endif
endif
obj-$(CONFIG_MRVL_WL_SD8887) += sd8887/
obj-$(CONFIG_MRVL_WL_SD8777) += sd8777/
obj-$(CONFIG_MRVL_WL_SD8XXX) += sd8777/ sd8887/
obj-$(CONFIG_MRVL_DEBUG) += debug/
obj-y += emmd/
obj-$(CONFIG_MRVL_SW_JTAG) += sw_jtag/
obj-$(CONFIG_MRVL_SKMALLOC) += kmalloc/
obj-$(CONFIG_MRVL_MMP_MODEM) += marvell-telephony/
obj-$(CONFIG_MRVL_GPU_GALCORE) += graphics/galcore_src/
obj-$(CONFIG_MRVL_RSV_PAGE) += rsv_emmc/
