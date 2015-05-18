/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Crazyfingers/Documents/Atlys Projects Git/ShiftRegister/ShiftRegTop.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {7, 0};
static int ng3[] = {6, 0};
static int ng4[] = {5, 0};
static int ng5[] = {4, 0};
static int ng6[] = {3, 0};
static int ng7[] = {2, 0};
static int ng8[] = {1, 0};
static int ng9[] = {0, 0};



static void Always_33_0(char *t0)
{
    char t4[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    char *t33;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(41, ng0);

LAB16:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t31 = (!(t7));
    if (t31 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 7);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 2088);
    t14 = (t0 + 2088);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t32, t29, 2, t30, 32, 1);
    t33 = (t32 + 4);
    t16 = *((unsigned int *)t33);
    t31 = (!(t16));
    if (t31 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 6);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 6);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 2088);
    t14 = (t0 + 2088);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t32, t29, 2, t30, 32, 1);
    t33 = (t32 + 4);
    t16 = *((unsigned int *)t33);
    t31 = (!(t16));
    if (t31 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 5);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 2088);
    t14 = (t0 + 2088);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t32, t29, 2, t30, 32, 1);
    t33 = (t32 + 4);
    t16 = *((unsigned int *)t33);
    t31 = (!(t16));
    if (t31 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 4);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 4);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 2088);
    t14 = (t0 + 2088);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t32, t29, 2, t30, 32, 1);
    t33 = (t32 + 4);
    t16 = *((unsigned int *)t33);
    t31 = (!(t16));
    if (t31 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 3);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 2088);
    t14 = (t0 + 2088);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t32, t29, 2, t30, 32, 1);
    t33 = (t32 + 4);
    t16 = *((unsigned int *)t33);
    t31 = (!(t16));
    if (t31 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 2);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 2088);
    t14 = (t0 + 2088);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t32, t29, 2, t30, 32, 1);
    t33 = (t32 + 4);
    t16 = *((unsigned int *)t33);
    t31 = (!(t16));
    if (t31 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 2088);
    t14 = (t0 + 2088);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t32, t29, 2, t30, 32, 1);
    t33 = (t32 + 4);
    t16 = *((unsigned int *)t33);
    t31 = (!(t16));
    if (t31 == 1)
        goto LAB31;

LAB32:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(36, ng0);

LAB15:    xsi_set_current_line(37, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 8, 0LL);
    goto LAB14;

LAB17:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB18;

LAB19:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB20;

LAB21:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB22;

LAB23:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB24;

LAB25:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB26;

LAB27:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB28;

LAB29:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB30;

LAB31:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB32;

}


extern void work_m_00000000002797559486_2443054173_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000002797559486_2443054173", "isim/test2sr_isim_beh.exe.sim/work/m_00000000002797559486_2443054173.didat");
	xsi_register_executes(pe);
}
