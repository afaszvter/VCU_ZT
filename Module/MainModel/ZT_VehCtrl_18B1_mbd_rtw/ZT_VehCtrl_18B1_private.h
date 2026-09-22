/*
 * File: ZT_VehCtrl_18B1_private.h
 *
 * Code generated for Simulink model 'ZT_VehCtrl_18B1'.
 *
 * Model version                   : 1.4
 * Simulink Coder version          : 9.0 (R2018b) 24-May-2018
 * MBDT for MPC57xx Series Version : 3.2.0 (R2016a-R2020a) 14-Apr-2020
 * C/C++ source code generated on  : Fri Sep 18 14:28:20 2026
 *
 * Target selection: mbd_mpc574x.tlc
 * Embedded hardware selection: Motorola PowerPC
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ZT_VehCtrl_18B1_private_h_
#define RTW_HEADER_ZT_VehCtrl_18B1_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "ZT_VehCtrl_18B1.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern flexcan_state_t canCom0_State;
extern flexcan_state_t canCom1_State;
extern flexcan_msgbuff_t canCom0_recvBuff36;
extern flexcan_msgbuff_t canCom0_recvBuff37;
extern flexcan_msgbuff_t canCom0_recvBuff38;
extern flexcan_msgbuff_t canCom0_recvBuff3;
extern flexcan_msgbuff_t canCom0_recvBuff5;
extern flexcan_msgbuff_t canCom0_recvBuff6;
extern flexcan_msgbuff_t canCom0_recvBuff2;
extern flexcan_msgbuff_t canCom0_recvBuff0;
extern flexcan_msgbuff_t canCom0_recvBuff1;
extern flexcan_msgbuff_t canCom0_recvBuff11;
extern flexcan_msgbuff_t canCom0_recvBuff12;
extern flexcan_msgbuff_t canCom0_recvBuff13;
extern flexcan_msgbuff_t canCom1_recvBuff24;
extern flexcan_msgbuff_t canCom1_recvBuff26;
extern flexcan_msgbuff_t canCom1_recvBuff25;
extern flexcan_msgbuff_t canCom1_recvBuff27;
extern flexcan_msgbuff_t canCom1_recvBuff28;
extern flexcan_msgbuff_t canCom1_recvBuff29;
extern flexcan_msgbuff_t canCom1_recvBuff43;
extern flexcan_msgbuff_t canCom1_recvBuff44;
extern flexcan_msgbuff_t canCom1_recvBuff45;
extern flexcan_msgbuff_t canCom1_recvBuff30;
extern flexcan_msgbuff_t canCom1_recvBuff31;
extern flexcan_msgbuff_t canCom1_recvBuff32;
extern flexcan_msgbuff_t canCom1_recvBuff33;
extern flexcan_msgbuff_t canCom1_recvBuff34;
extern flexcan_msgbuff_t canCom1_recvBuff35;
extern flexcan_msgbuff_t canCom0_recvBuff9;
extern flexcan_msgbuff_t canCom1_recvBuff39;
extern flexcan_msgbuff_t canCom1_recvBuff40;
extern flexcan_msgbuff_t canCom1_recvBuff41;
extern flexcan_msgbuff_t canCom1_recvBuff42;
extern flexcan_msgbuff_t canCom0_recvBuff10;
extern flexcan_msgbuff_t canCom1_recvBuff46;

#if defined(__MWERKS__)

double fmod (double x, double y);
double fabs (double);

#endif

extern void ZT_VehCtrl_18B1_CAN0(void);
extern void ZT_VehCtrl_18B1_CAN1(void);

#endif                                 /* RTW_HEADER_ZT_VehCtrl_18B1_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
