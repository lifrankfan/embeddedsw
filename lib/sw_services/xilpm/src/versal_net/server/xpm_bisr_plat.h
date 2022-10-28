/******************************************************************************
* Copyright (c) 2018 - 2022 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/

#ifndef XPM_BISR_PLAT_H_
#define XPM_BISR_PLAT_H_

#ifdef __cplusplus
extern "C" {
#endif
#include "xpm_common.h"

XStatus XPmBisr_Repair(u32 TagId);
XStatus XPmBisr_NidbLeftMostLaneRepair(void);
XStatus XPmBisr_NidbLaneRepair(void);
XStatus XPmBisr_TriggerLpd(void);

#ifdef __cplusplus
}
#endif

#endif /* XPM_BISR_PLAT_H_ */
