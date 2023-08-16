/*
 *
 * FocalTech TouchScreen driver.
 *
 * Copyright (c) 2012-2018, FocalTech Systems, Ltd., all rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
/************************************************************************
*
* File Name: focaltech_config.h
*
*    Author: Focaltech Driver Team
*
*   Created: 2016-08-08
*
*  Abstract: global configurations
*
*   Version: v1.0
*
************************************************************************/
#ifndef _LINUX_FOCLATECH_CONFIG_H_
#define _LINUX_FOCLATECH_CONFIG_H_

/**************************************************/
/****** G: A, I: B, S: C, U: D  ******************/
/****** chip type defines, do not modify *********/
#define _FT8716             0x87160805
#define _FT8736             0x87360806
#define _FT8006M            0x80060807
#define _FT7250             0x72500807
#define _FT8606             0x86060808
#define _FT8607             0x86070809
#define _FTE716             0xE716080A
#define _FT8006U            0x8006D80B
#define _FT8613             0x8613080C
#define _FT8719             0x8719080D
#define _FT8739             0x8739080E
#define _FT8615             0x8615080F
#define _FT8201             0x82010810

#define _FT5416             0x54160402
#define _FT5426             0x54260402
#define _FT5435             0x54350402
#define _FT5436             0x54360402
#define _FT5526             0x55260402
#define _FT5526I            0x5526B402
#define _FT5446             0x54460402
#define _FT5346             0x53460402
#define _FT5446I            0x5446B402
#define _FT5346I            0x5346B402
#define _FT7661             0x76610402
#define _FT7511             0x75110402
#define _FT7421             0x74210402
#define _FT7681             0x76810402
#define _FT3C47U            0x3C47D402
#define _FT3417             0x34170402
#define _FT3517             0x35170402
#define _FT3327             0x33270402
#define _FT3427             0x34270402
#define _FT7311             0x73110402

#define _FT5626             0x56260401
#define _FT5726             0x57260401
#define _FT5826B            0x5826B401
#define _FT5826S            0x5826C401
#define _FT7811             0x78110401
#define _FT3D47             0x3D470401
#define _FT3617             0x36170401
#define _FT3717             0x37170401
#define _FT3817B            0x3817B401
#define _FT3517U            0x3517D401

#define _FT6236U            0x6236D003
#define _FT6336G            0x6336A003
#define _FT6336U            0x6336D003
#define _FT6436U            0x6436D003

#define _FT3267             0x32670004
#define _FT3367             0x33670004

#define _FT3327DQQ_001      0x3327D482
#define _FT5446DQS_W01      0x5446D482
#define _FT5446DQS_W02      0x5446A482
#define _FT5446DQS_002      0x5446B482
#define _FT5446DQS_Q02      0x5446C482

#define _FT3518             0x35180481
#define _FT3558             0x35580481

/*************************************************/

/*
 * choose your ic chip type of focaltech
 */
#define FTS_CHIP_TYPE   _FT8719

/******************* Enables *********************/
/*********** 1 to enable, 0 to disable ***********/

/*
 * show debug log info
 * enable it for debug, disable it for release
 */
#define FTS_DEBUG_EN                            1

/*
 * Linux MultiTouch Protocol
 * 1: Protocol B(default), 0: Protocol A
 */
#define FTS_MT_PROTOCOL_B_EN                    1

/*
 * Report Pressure in multitouch
 * 1:enable(default),0:disable
*/
#define FTS_REPORT_PRESSURE_EN                  0

/*
 * Gesture function enable
 * default: disable
 */
#define FTS_GESTURE_EN                          1

/*
 * ESD check & protection
 * default: disable
 */
#define FTS_ESDCHECK_EN                         0

/*
 * Production test enable
 * 1: enable, 0:disable(default)
 */
#define FTS_TEST_EN                             1

/*
 * Glove mode enable
 * 1: enable, 0:disable(default)
 */
#define FTS_GLOVE_EN                            0
/*
 * cover enable
 * 1: enable, 0:disable(default)
 */
#define FTS_COVER_EN                            1

/* smart area macro */
#define FTS_SMART_AREA

/*
 * Charger enable
 * 1: enable, 0:disable(default)
 */
#define FTS_CHARGER_EN                          0

/*
 * Nodes for tools, please keep enable
 */
#define FTS_SYSFS_NODE_EN                       1
#define FTS_APK_NODE_EN                         1

/*
 * Pinctrl enable
 * default: disable
 */
#define FTS_PINCTRL_EN                          1

/*
 * Customer power enable
 * enable it when customer need control TP power
 * default: disable
 */
#define FTS_POWER_SOURCE_CUST_EN                0

/****************************************************/

/********************** Upgrade ****************************/
/*
 * auto upgrade, please keep enable
 */
#define FTS_AUTO_UPGRADE_EN                     1

/*
 * auto upgrade for lcd cfg
 */
#define FTS_AUTO_LIC_UPGRADE_EN                 0

/*
 * Check vendor_id number
 * 0:No check vendor_id (default)
 * 1/2/3: Check vendor_id for vendor compatibility
 */
#define FTS_GET_VENDOR_ID_NUM                   4

#define FTS_ONLY_TP_VENDOR_ID

/* if upgrage firmware use bin file when boot,pls open BOOT_FW_UPGRADE_BIN */
#define BOOT_FW_UPGRADE_BIN
#ifndef BOOT_FW_UPGRADE_BIN
/*
 * vendor_id(s) for vendor(s) to be compatible with.
 * a confirmation of vendor_id(s) is recommended.
 * FTS_VENDOR_ID = PANEL_ID << 8 + VENDOR_ID
 * FTS_GET_VENDOR_ID_NUM == 0/1, no check vendor id, you may ignore them
 * FTS_GET_VENDOR_ID_NUM > 1, compatible with FTS_VENDOR_ID
 * FTS_GET_VENDOR_ID_NUM >= 2, compatible with FTS_VENDOR_ID2
 * FTS_GET_VENDOR_ID_NUM >= 3, compatible with FTS_VENDOR_ID3
 */
#define FTS_VENDOR_ID				0x67
#define FTS_VENDOR_ID2				0x84
#define FTS_VENDOR_ID3				0x60
#define FTS_VENDOR_ID4				0xE8

/*
 * FW.i file for auto upgrade, you must replace it with your own
 * define your own fw_file, the sample one to be replaced is invalid
 * NOTE: if FTS_GET_VENDOR_ID_NUM > 1, it's the fw corresponding with FTS_VENDOR_ID
 */
#define FTS_UPGRADE_FW_FILE                      "P671F20_FT8719_DJN.i"

/*
 * if FTS_GET_VENDOR_ID_NUM >= 2, fw corrsponding with FTS_VENDOR_ID2
 * define your own fw_file, the sample one is invalid
 */
#define FTS_UPGRADE_FW2_FILE                     "P671F20_FT8719_DJN.i"

/*
 * if FTS_GET_VENDOR_ID_NUM >= 3, fw corrsponding with FTS_VENDOR_ID3
 * define your own fw_file, the sample one is invalid
 */
#define FTS_UPGRADE_FW3_FILE                     "P671F20_FT8719_LEAD.i"

#define FTS_UPGRADE_FW4_FILE                     "P671F20_FT8719_LEAD.i"
/*********************************************************/
#endif /* BOOT_FW_UPGRADE_BIN */

#endif /* _LINUX_FOCLATECH_CONFIG_H_ */
