/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#ifndef __DRIVERS_INTERCONNECT_QCOM_SDM845_H__
#define __DRIVERS_INTERCONNECT_QCOM_SDM845_H__

#define SDM845_MASTER_A1NOC_CFG				1
#define SDM845_MASTER_BLSP_1				2
#define SDM845_MASTER_TSIF				3
#define SDM845_MASTER_SDCC_2				4
#define SDM845_MASTER_SDCC_4				5
#define SDM845_MASTER_UFS_CARD				6
#define SDM845_MASTER_UFS_MEM				7
#define SDM845_MASTER_PCIE_0				8
#define SDM845_MASTER_A2NOC_CFG				9
#define SDM845_MASTER_QDSS_BAM				10
#define SDM845_MASTER_BLSP_2				11
#define SDM845_MASTER_CNOC_A2NOC			12
#define SDM845_MASTER_CRYPTO				13
#define SDM845_MASTER_IPA				14
#define SDM845_MASTER_PCIE_1				15
#define SDM845_MASTER_QDSS_ETR				16
#define SDM845_MASTER_USB3_0				17
#define SDM845_MASTER_USB3_1				18
#define SDM845_MASTER_CAMNOC_HF0_UNCOMP			19
#define SDM845_MASTER_CAMNOC_HF1_UNCOMP			20
#define SDM845_MASTER_CAMNOC_SF_UNCOMP			21
#define SDM845_MASTER_SPDM				22
#define SDM845_MASTER_TIC				23
#define SDM845_MASTER_SNOC_CNOC				24
#define SDM845_MASTER_QDSS_DAP				25
#define SDM845_MASTER_CNOC_DC_NOC			26
#define SDM845_MASTER_APPSS_PROC			27
#define SDM845_MASTER_GNOC_CFG				28
#define SDM845_MASTER_LLCC				29
#define SDM845_MASTER_TCU_0				30
#define SDM845_MASTER_MEM_NOC_CFG			31
#define SDM845_MASTER_GNOC_MEM_NOC			32
#define SDM845_MASTER_MNOC_HF_MEM_NOC			33
#define SDM845_MASTER_MNOC_SF_MEM_NOC			34
#define SDM845_MASTER_SNOC_GC_MEM_NOC			35
#define SDM845_MASTER_SNOC_SF_MEM_NOC			36
#define SDM845_MASTER_GFX3D				37
#define SDM845_MASTER_CNOC_MNOC_CFG			38
#define SDM845_MASTER_CAMNOC_HF0			39
#define SDM845_MASTER_CAMNOC_HF1			40
#define SDM845_MASTER_CAMNOC_SF				41
#define SDM845_MASTER_MDP0				42
#define SDM845_MASTER_MDP1				43
#define SDM845_MASTER_ROTATOR				44
#define SDM845_MASTER_VIDEO_P0				45
#define SDM845_MASTER_VIDEO_P1				46
#define SDM845_MASTER_VIDEO_PROC			47
#define SDM845_MASTER_SNOC_CFG				48
#define SDM845_MASTER_A1NOC_SNOC			49
#define SDM845_MASTER_A2NOC_SNOC			50
#define SDM845_MASTER_GNOC_SNOC				51
#define SDM845_MASTER_MEM_NOC_SNOC			52
#define SDM845_MASTER_ANOC_PCIE_SNOC			53
#define SDM845_MASTER_PIMEM				54
#define SDM845_MASTER_GIC				55
#define SDM845_SLAVE_A1NOC_SNOC				56
#define SDM845_SLAVE_SERVICE_A1NOC			57
#define SDM845_SLAVE_ANOC_PCIE_A1NOC_SNOC		58
#define SDM845_SLAVE_A2NOC_SNOC				59
#define SDM845_SLAVE_ANOC_PCIE_SNOC			60
#define SDM845_SLAVE_SERVICE_A2NOC			61
#define SDM845_SLAVE_CAMNOC_UNCOMP			62
#define SDM845_SLAVE_A1NOC_CFG				63
#define SDM845_SLAVE_A2NOC_CFG				64
#define SDM845_SLAVE_AOP				65
#define SDM845_SLAVE_AOSS				66
#define SDM845_SLAVE_CAMERA_CFG				67
#define SDM845_SLAVE_CLK_CTL				68
#define SDM845_SLAVE_CDSP_CFG				69
#define SDM845_SLAVE_RBCPR_CX_CFG			70
#define SDM845_SLAVE_CRYPTO_0_CFG			71
#define SDM845_SLAVE_DCC_CFG				72
#define SDM845_SLAVE_CNOC_DDRSS				73
#define SDM845_SLAVE_DISPLAY_CFG			74
#define SDM845_SLAVE_GLM				75
#define SDM845_SLAVE_GFX3D_CFG				76
#define SDM845_SLAVE_IMEM_CFG				77
#define SDM845_SLAVE_IPA_CFG				78
#define SDM845_SLAVE_CNOC_MNOC_CFG			79
#define SDM845_SLAVE_PCIE_0_CFG				80
#define SDM845_SLAVE_PCIE_1_CFG				81
#define SDM845_SLAVE_PDM				82
#define SDM845_SLAVE_SOUTH_PHY_CFG			83
#define SDM845_SLAVE_PIMEM_CFG				84
#define SDM845_SLAVE_PRNG				85
#define SDM845_SLAVE_QDSS_CFG				86
#define SDM845_SLAVE_BLSP_2				87
#define SDM845_SLAVE_BLSP_1				88
#define SDM845_SLAVE_SDCC_2				89
#define SDM845_SLAVE_SDCC_4				90
#define SDM845_SLAVE_SNOC_CFG				91
#define SDM845_SLAVE_SPDM_WRAPPER			92
#define SDM845_SLAVE_SPSS_CFG				93
#define SDM845_SLAVE_TCSR				94
#define SDM845_SLAVE_TLMM_NORTH				95
#define SDM845_SLAVE_TLMM_SOUTH				96
#define SDM845_SLAVE_TSIF				97
#define SDM845_SLAVE_UFS_CARD_CFG			98
#define SDM845_SLAVE_UFS_MEM_CFG			99
#define SDM845_SLAVE_USB3_0				100
#define SDM845_SLAVE_USB3_1				101
#define SDM845_SLAVE_VENUS_CFG				102
#define SDM845_SLAVE_VSENSE_CTRL_CFG			103
#define SDM845_SLAVE_CNOC_A2NOC				104
#define SDM845_SLAVE_SERVICE_CNOC			105
#define SDM845_SLAVE_LLCC_CFG				106
#define SDM845_SLAVE_MEM_NOC_CFG			107
#define SDM845_SLAVE_GNOC_SNOC				108
#define SDM845_SLAVE_GNOC_MEM_NOC			109
#define SDM845_SLAVE_SERVICE_GNOC			110
#define SDM845_SLAVE_EBI1				111
#define SDM845_SLAVE_MSS_PROC_MS_MPU_CFG		112
#define SDM845_SLAVE_MEM_NOC_GNOC			113
#define SDM845_SLAVE_LLCC				114
#define SDM845_SLAVE_MEM_NOC_SNOC			115
#define SDM845_SLAVE_SERVICE_MEM_NOC			116
#define SDM845_SLAVE_MNOC_SF_MEM_NOC			117
#define SDM845_SLAVE_MNOC_HF_MEM_NOC			118
#define SDM845_SLAVE_SERVICE_MNOC			119
#define SDM845_SLAVE_APPSS				120
#define SDM845_SLAVE_SNOC_CNOC				121
#define SDM845_SLAVE_SNOC_MEM_NOC_GC			122
#define SDM845_SLAVE_SNOC_MEM_NOC_SF			123
#define SDM845_SLAVE_IMEM				124
#define SDM845_SLAVE_PCIE_0				125
#define SDM845_SLAVE_PCIE_1				126
#define SDM845_SLAVE_PIMEM				127
#define SDM845_SLAVE_SERVICE_SNOC			128
#define SDM845_SLAVE_QDSS_STM				129
#define SDM845_SLAVE_TCU				130
#define SDM845_MASTER_OSM_L3_APPS			131
#define SDM845_SLAVE_OSM_L3				132

#endif /* __DRIVERS_INTERCONNECT_QCOM_SDM845_H__ */
