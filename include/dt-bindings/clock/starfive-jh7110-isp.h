/* SPDX-License-Identifier: GPL-2.0 OR MIT */
/*
 * Copyright 2022 StarFive, Inc <xingyu.wu@starfivetech.com>
 */

#ifndef __DT_BINDINGS_CLOCK_STARFIVE_JH7110_ISP_H__
#define __DT_BINDINGS_CLOCK_STARFIVE_JH7110_ISP_H__

/* regisger */
#define JH7110_DOM4_APB_FUNC					0
#define JH7110_MIPI_RX0_PXL					1
#define JH7110_DVP_INV						2
#define JH7110_U0_M31DPHY_CFGCLK_IN				3
#define JH7110_U0_M31DPHY_REFCLK_IN				4
#define JH7110_U0_M31DPHY_TXCLKESC_LAN0				5
#define JH7110_U0_VIN_PCLK					6
#define JH7110_U0_VIN_SYS_CLK					7
#define JH7110_U0_VIN_PIXEL_CLK_IF0				8
#define JH7110_U0_VIN_PIXEL_CLK_IF1				9
#define JH7110_U0_VIN_PIXEL_CLK_IF2				10
#define JH7110_U0_VIN_PIXEL_CLK_IF3				11
#define JH7110_U0_VIN_CLK_P_AXIWR				12
#define JH7110_U0_ISPV2_TOP_WRAPPER_CLK_C			13

#define JH7110_CLK_ISP_REG_END					14

/* other */
#define JH7110_U3_PCLK_MUX_FUNC_PCLK				14
#define JH7110_U3_PCLK_MUX_BIST_PCLK				15
#define JH7110_DOM4_APB						16
#define JH7110_U0_VIN_PCLK_FREE					17
#define JH7110_U0_VIN_CLK_P_AXIRD				18
#define JH7110_U0_VIN_ACLK					19
#define JH7110_U0_ISPV2_TOP_WRAPPER_CLK_ISP_AXI_IN		20
#define JH7110_U0_ISPV2_TOP_WRAPPER_CLK_ISP_X2			21
#define JH7110_U0_ISPV2_TOP_WRAPPER_CLK_ISP			22
#define JH7110_U0_ISPV2_TOP_WRAPPER_CLK_P			23
#define JH7110_U0_CRG_PCLK					24
#define JH7110_U0_SYSCON_PCLK					25
#define JH7110_U0_M31DPHY_APBCFG_PCLK				26
#define JH7110_U0_AXI2APB_BRIDGE_CLK_DOM4_APB			27
#define JH7110_U0_AXI2APB_BRIDGE_ISP_AXI4SLV_CLK		28
#define JH7110_U3_PCLK_MUX_PCLK					29

#define JH7110_CLK_ISP_END					30

#endif /* __DT_BINDINGS_CLOCK_STARFIVE_JH7110_H__ */
