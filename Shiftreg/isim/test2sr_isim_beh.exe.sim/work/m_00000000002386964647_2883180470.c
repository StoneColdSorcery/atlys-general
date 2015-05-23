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
static const char *ng0 = "C:/Users/Crazyfingers/Documents/Atlys-General/atlys-general/Shiftreg/Source/ClockBaseTop.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {16U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {126U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {32U, 0U};
static unsigned int ng11[] = {4U, 0U};



static int sp_RxDecodeReset(char *t1, char *t2)
{
    char t9[8];
    char t17[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2888);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(257, ng0);

LAB5:    xsi_set_current_line(258, ng0);
    xsi_set_current_line(258, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 11824);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 11824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1968);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(261, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8784);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(262, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 9424);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(263, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9264);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(265, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 9744);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(266, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 10224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(267, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 10384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(268, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 10064);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(258, ng0);

LAB9:    xsi_set_current_line(259, ng0);
    t15 = ((char*)((ng2)));
    t16 = (t1 + 9584);
    t19 = (t1 + 9584);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 9584);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t1 + 11824);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(258, ng0);
    t4 = (t1 + 11824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 11824);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB6;

LAB10:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB11;

}

static int sp_RxDataClear(char *t1, char *t2)
{
    char t9[8];
    char t17[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3320);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(273, ng0);

LAB5:    xsi_set_current_line(274, ng0);
    xsi_set_current_line(274, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 11824);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 11824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1968);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(274, ng0);

LAB9:    xsi_set_current_line(275, ng0);
    t15 = ((char*)((ng2)));
    t16 = (t1 + 9584);
    t19 = (t1 + 9584);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 9584);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t1 + 11824);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(274, ng0);
    t4 = (t1 + 11824);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 11824);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB6;

LAB10:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, *((unsigned int *)t18), t38, 0LL);
    goto LAB11;

}

static int sp_isSpecial(char *t1, char *t2)
{
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t0 = 1;
    xsi_set_current_line(283, ng0);

LAB2:    xsi_set_current_line(284, ng0);
    t3 = (t1 + 12624);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB6;

LAB3:    if (t19 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(287, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 12464);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);

LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(285, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t1 + 12464);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    goto LAB9;

}

static void Cont_62_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 13544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 16536);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}

static void Cont_63_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 13792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16600);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_65_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 14040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 16664);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_67_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 14288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4864U);
    t3 = *((char **)t2);
    t2 = (t0 + 16728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 16344);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_69_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 14536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 12304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16792);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 16360);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_137_5(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    t1 = (t0 + 14784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 16376);
    *((int *)t2) = 1;
    t3 = (t0 + 14816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);

LAB5:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 8144);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(163, ng0);

LAB28:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(141, ng0);

LAB16:    xsi_set_current_line(142, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 8624);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 7584U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t2) == 0)
        goto LAB17;

LAB19:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB20:    t5 = (t11 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t11);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(147, ng0);

LAB25:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 8304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB23:    goto LAB15;

LAB9:    xsi_set_current_line(152, ng0);

LAB26:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 8304);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(157, ng0);

LAB27:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 8304);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB17:    *((unsigned int *)t11) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(143, ng0);

LAB24:    xsi_set_current_line(144, ng0);
    t7 = ((char*)((ng3)));
    t9 = (t0 + 7984);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 8304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB23;

}

static void Always_172_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    t1 = (t0 + 15032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 16392);
    *((int *)t2) = 1;
    t3 = (t0 + 15064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(172, ng0);

LAB5:    xsi_set_current_line(173, ng0);
    t4 = (t0 + 4704U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(178, ng0);

LAB14:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 8304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8144);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 8144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t30 == 1)
        goto LAB16;

LAB17:
LAB18:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(173, ng0);

LAB13:    xsi_set_current_line(175, ng0);
    t28 = ((char*)((ng6)));
    t29 = (t0 + 8144);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(191, ng0);
    t7 = (t0 + 6144U);
    t8 = *((char **)t7);
    t7 = (t0 + 8464);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 8, 0LL);
    goto LAB18;

}

static void Always_294_7(char *t0)
{
    char t8[8];
    char t24[8];
    char t36[8];
    char t47[8];
    char t55[8];
    char t95[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t96;
    char *t97;
    char *t98;
    char *t99;

LAB0:    t1 = (t0 + 15280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(294, ng0);
    t2 = (t0 + 16408);
    *((int *)t2) = 1;
    t3 = (t0 + 15312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(294, ng0);

LAB5:    xsi_set_current_line(300, ng0);
    t4 = (t0 + 10544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB13:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB14;

LAB15:    memcpy(t55, t24, 8);

LAB16:    t87 = (t55 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t55);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(310, ng0);
    t2 = (t0 + 10544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB35;

LAB32:    if (t20 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t8) = 1;

LAB35:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t10) != 0)
        goto LAB38;

LAB39:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB40;

LAB41:    memcpy(t55, t24, 8);

LAB42:    t69 = (t55 + 4);
    t88 = *((unsigned int *)t69);
    t89 = (~(t88));
    t90 = *((unsigned int *)t55);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(319, ng0);

LAB58:    xsi_set_current_line(320, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(321, ng0);
    t2 = (t0 + 8784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB59:    t5 = ((char*)((ng10)));
    t79 = xsi_vlog_unsigned_case_compare(t4, 6, t5, 6);
    if (t79 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng9)));
    t79 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t79 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng4)));
    t79 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t79 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng11)));
    t79 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t79 == 1)
        goto LAB66;

LAB67:
LAB69:
LAB68:    xsi_set_current_line(380, ng0);

LAB104:    xsi_set_current_line(381, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(382, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(383, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(384, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(385, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(386, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 9104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB70:
LAB56:
LAB30:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB12:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t37 = (t0 + 9264);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t36, 0, 8);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t40) == 0)
        goto LAB17;

LAB19:    t46 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t46) = 1;

LAB20:    memset(t47, 0, 8);
    t48 = (t36 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t36);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t48) != 0)
        goto LAB23;

LAB24:    t56 = *((unsigned int *)t24);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t24 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB17:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t47) = 1;
    goto LAB24;

LAB23:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB25:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t24 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t24);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB27;

LAB28:    xsi_set_current_line(300, ng0);

LAB31:    xsi_set_current_line(302, ng0);
    t93 = ((char*)((ng6)));
    t94 = (t0 + 9104);
    xsi_vlogvar_assign_value(t94, t93, 0, 0, 6);
    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 10704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB30;

LAB34:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t24) = 1;
    goto LAB39;

LAB38:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB39;

LAB40:    t31 = (t0 + 9264);
    t32 = (t31 + 56U);
    t37 = *((char **)t32);
    memset(t36, 0, 8);
    t38 = (t37 + 4);
    t41 = *((unsigned int *)t38);
    t42 = (~(t41));
    t43 = *((unsigned int *)t37);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t38) == 0)
        goto LAB43;

LAB45:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;

LAB46:    memset(t47, 0, 8);
    t40 = (t36 + 4);
    t49 = *((unsigned int *)t40);
    t50 = (~(t49));
    t51 = *((unsigned int *)t36);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t40) != 0)
        goto LAB49;

LAB50:    t56 = *((unsigned int *)t24);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t48 = (t24 + 4);
    t54 = (t47 + 4);
    t59 = (t55 + 4);
    t62 = *((unsigned int *)t48);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t59);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB43:    *((unsigned int *)t36) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t47) = 1;
    goto LAB50;

LAB49:    t46 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB50;

LAB51:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t59);
    *((unsigned int *)t55) = (t67 | t68);
    t60 = (t24 + 4);
    t61 = (t47 + 4);
    t71 = *((unsigned int *)t24);
    t72 = (~(t71));
    t73 = *((unsigned int *)t60);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t61);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t83 & t81);
    t84 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB53;

LAB54:    xsi_set_current_line(310, ng0);

LAB57:    xsi_set_current_line(311, ng0);
    t70 = ((char*)((ng9)));
    t87 = (t0 + 9104);
    xsi_vlogvar_assign_value(t87, t70, 0, 0, 6);
    xsi_set_current_line(312, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(313, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(318, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB56;

LAB60:    xsi_set_current_line(323, ng0);

LAB71:    xsi_set_current_line(325, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 11664);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(326, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(327, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(328, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(329, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 9104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    goto LAB70;

LAB62:    xsi_set_current_line(334, ng0);

LAB72:    xsi_set_current_line(335, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 11184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(336, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(337, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(338, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 9104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    goto LAB70;

LAB64:    xsi_set_current_line(344, ng0);

LAB73:    xsi_set_current_line(345, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 11184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(346, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(349, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(350, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 9104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    goto LAB70;

LAB66:    xsi_set_current_line(363, ng0);

LAB74:    xsi_set_current_line(364, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 11664);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(365, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(366, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(367, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(368, ng0);
    t2 = (t0 + 10384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10224);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t9, 8, t10, 32);
    memset(t24, 0, 8);
    t23 = (t5 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB76;

LAB75:    t25 = (t8 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB76;

LAB79:    if (*((unsigned int *)t5) < *((unsigned int *)t8))
        goto LAB77;

LAB78:    memset(t36, 0, 8);
    t32 = (t24 + 4);
    t11 = *((unsigned int *)t32);
    t12 = (~(t11));
    t13 = *((unsigned int *)t24);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t32) != 0)
        goto LAB82;

LAB83:    t38 = (t36 + 4);
    t16 = *((unsigned int *)t36);
    t17 = *((unsigned int *)t38);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB84;

LAB85:    memcpy(t95, t36, 8);

LAB86:    t97 = (t95 + 4);
    t66 = *((unsigned int *)t97);
    t67 = (~(t66));
    t68 = *((unsigned int *)t95);
    t71 = (t68 & t67);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(372, ng0);

LAB103:    xsi_set_current_line(373, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 9104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(374, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB101:    goto LAB70;

LAB76:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB78;

LAB77:    *((unsigned int *)t24) = 1;
    goto LAB78;

LAB80:    *((unsigned int *)t36) = 1;
    goto LAB83;

LAB82:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB83;

LAB84:    t39 = (t0 + 10384);
    t40 = (t39 + 56U);
    t46 = *((char **)t40);
    t48 = (t0 + 1968);
    t54 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t46 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB88;

LAB87:    t59 = (t54 + 4);
    if (*((unsigned int *)t59) != 0)
        goto LAB88;

LAB91:    if (*((unsigned int *)t46) < *((unsigned int *)t54))
        goto LAB89;

LAB90:    memset(t55, 0, 8);
    t61 = (t47 + 4);
    t19 = *((unsigned int *)t61);
    t20 = (~(t19));
    t21 = *((unsigned int *)t47);
    t22 = (t21 & t20);
    t26 = (t22 & 1U);
    if (t26 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t61) != 0)
        goto LAB94;

LAB95:    t27 = *((unsigned int *)t36);
    t28 = *((unsigned int *)t55);
    t29 = (t27 & t28);
    *((unsigned int *)t95) = t29;
    t70 = (t36 + 4);
    t87 = (t55 + 4);
    t93 = (t95 + 4);
    t30 = *((unsigned int *)t70);
    t33 = *((unsigned int *)t87);
    t34 = (t30 | t33);
    *((unsigned int *)t93) = t34;
    t35 = *((unsigned int *)t93);
    t41 = (t35 != 0);
    if (t41 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB86;

LAB88:    t60 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB90;

LAB89:    *((unsigned int *)t47) = 1;
    goto LAB90;

LAB92:    *((unsigned int *)t55) = 1;
    goto LAB95;

LAB94:    t69 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB95;

LAB96:    t42 = *((unsigned int *)t95);
    t43 = *((unsigned int *)t93);
    *((unsigned int *)t95) = (t42 | t43);
    t94 = (t36 + 4);
    t96 = (t55 + 4);
    t44 = *((unsigned int *)t36);
    t45 = (~(t44));
    t49 = *((unsigned int *)t94);
    t50 = (~(t49));
    t51 = *((unsigned int *)t55);
    t52 = (~(t51));
    t53 = *((unsigned int *)t96);
    t56 = (~(t53));
    t79 = (t45 & t50);
    t80 = (t52 & t56);
    t57 = (~(t79));
    t58 = (~(t80));
    t62 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t62 & t57);
    t63 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t63 & t58);
    t64 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t64 & t57);
    t65 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t65 & t58);
    goto LAB98;

LAB99:    xsi_set_current_line(368, ng0);

LAB102:    xsi_set_current_line(370, ng0);
    t98 = ((char*)((ng11)));
    t99 = (t0 + 9104);
    xsi_vlogvar_assign_value(t99, t98, 0, 0, 6);
    xsi_set_current_line(371, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB101;

}

static void Always_403_8(char *t0)
{
    char t4[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 15528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(403, ng0);
    t2 = (t0 + 16424);
    *((int *)t2) = 1;
    t3 = (t0 + 15560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(403, ng0);

LAB5:    xsi_set_current_line(405, ng0);
    t5 = (t0 + 4704U);
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
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(408, ng0);
    t2 = (t0 + 8624);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(411, ng0);
    t2 = (t0 + 11984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB21;

LAB18:    if (t18 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t4) = 1;

LAB21:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB22;

LAB23:
LAB24:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(405, ng0);

LAB13:    xsi_set_current_line(406, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 11984);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(407, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(408, ng0);

LAB17:    xsi_set_current_line(409, ng0);
    t12 = (t0 + 8464);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t0 + 10544);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(410, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

LAB20:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(411, ng0);

LAB25:    xsi_set_current_line(412, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 11984);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB24;

}

static void Always_423_9(char *t0)
{
    char t4[8];
    char t35[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    int t36;
    int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 15776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(423, ng0);
    t2 = (t0 + 16440);
    *((int *)t2) = 1;
    t3 = (t0 + 15808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(423, ng0);

LAB5:    xsi_set_current_line(425, ng0);
    t5 = (t0 + 4704U);
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
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(430, ng0);

LAB20:    xsi_set_current_line(431, ng0);
    t2 = (t0 + 10064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1832);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB22;

LAB21:    t13 = (t12 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB22;

LAB25:    if (*((unsigned int *)t5) > *((unsigned int *)t12))
        goto LAB23;

LAB24:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(438, ng0);
    t2 = (t0 + 11984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(425, ng0);

LAB13:    xsi_set_current_line(427, ng0);
    t19 = (t0 + 15584);
    t20 = (t0 + 2888);
    t21 = xsi_create_subprogram_invocation(t19, 0, t0, t20, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t20, t21);

LAB16:    t22 = (t0 + 15680);
    t23 = *((char **)t22);
    t24 = (t23 + 80U);
    t25 = *((char **)t24);
    t26 = (t25 + 272U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t29 = *((char **)t28);
    t30 = ((int  (*)(char *, char *))t29)(t0, t23);

LAB18:    if (t30 != 0)
        goto LAB19;

LAB14:    t23 = (t0 + 2888);
    xsi_vlog_subprogram_popinvocation(t23);

LAB15:    t31 = (t0 + 15680);
    t32 = *((char **)t31);
    t31 = (t0 + 2888);
    t33 = (t0 + 15584);
    t34 = 0;
    xsi_delete_subprogram_invocation(t31, t32, t0, t33, t34);
    goto LAB12;

LAB17:;
LAB19:    t22 = (t0 + 15776U);
    *((char **)t22) = &&LAB16;
    goto LAB1;

LAB22:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB24;

LAB23:    *((unsigned int *)t4) = 1;
    goto LAB24;

LAB26:    xsi_set_current_line(431, ng0);

LAB29:    goto LAB28;

LAB30:    xsi_set_current_line(438, ng0);

LAB33:    xsi_set_current_line(443, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 10064);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 0LL);
    xsi_set_current_line(444, ng0);
    t2 = (t0 + 8784);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8944);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 6, 0LL);
    xsi_set_current_line(448, ng0);
    t2 = (t0 + 10704);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(451, ng0);

LAB38:    xsi_set_current_line(452, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(453, ng0);
    t2 = (t0 + 9104);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8784);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 6, 0LL);
    xsi_set_current_line(455, ng0);
    t2 = (t0 + 11024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(458, ng0);
    t2 = (t0 + 11664);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(462, ng0);
    t2 = (t0 + 11504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(465, ng0);
    t2 = (t0 + 11184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB51;

LAB52:
LAB53:
LAB36:    goto LAB32;

LAB34:    xsi_set_current_line(448, ng0);

LAB37:    xsi_set_current_line(450, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 9264);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 1, 0LL);
    goto LAB36;

LAB39:    xsi_set_current_line(455, ng0);

LAB42:    xsi_set_current_line(456, ng0);
    t12 = (t0 + 10544);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t0 + 9424);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    goto LAB41;

LAB43:    xsi_set_current_line(458, ng0);

LAB46:    xsi_set_current_line(459, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 10224);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    xsi_set_current_line(460, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB45;

LAB47:    xsi_set_current_line(462, ng0);

LAB50:    xsi_set_current_line(463, ng0);
    t12 = (t0 + 10544);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t0 + 10224);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    goto LAB49;

LAB51:    xsi_set_current_line(465, ng0);

LAB54:    xsi_set_current_line(466, ng0);
    t12 = (t0 + 10384);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t19, 8, t20, 32);
    t21 = (t0 + 10384);
    xsi_vlogvar_wait_assign_value(t21, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(467, ng0);
    t2 = (t0 + 10544);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9584);
    t12 = (t0 + 9584);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = (t0 + 9584);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 10384);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t4, t35, t19, t22, 2, 1, t25, 8, 2);
    t26 = (t4 + 4);
    t7 = *((unsigned int *)t26);
    t30 = (!(t7));
    t27 = (t35 + 4);
    t8 = *((unsigned int *)t27);
    t36 = (!(t8));
    t37 = (t30 && t36);
    if (t37 == 1)
        goto LAB55;

LAB56:    goto LAB53;

LAB55:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t35);
    t38 = (t9 - t10);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t35), t39, 0LL);
    goto LAB56;

}

static void Always_489_10(char *t0)
{
    char t4[8];
    char t30[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 16024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(489, ng0);
    t2 = (t0 + 16456);
    *((int *)t2) = 1;
    t3 = (t0 + 16056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(489, ng0);

LAB5:    xsi_set_current_line(490, ng0);
    t5 = (t0 + 4704U);
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
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(493, ng0);

LAB14:    xsi_set_current_line(495, ng0);
    t2 = (t0 + 10384);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t4) = 1;

LAB18:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(497, ng0);

LAB23:    xsi_set_current_line(498, ng0);
    t2 = (t0 + 12144);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10384);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t13, 8, t19, 32);
    memset(t30, 0, 8);
    t20 = (t5 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB25;

LAB24:    t28 = (t4 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB27;

LAB26:    *((unsigned int *)t30) = 1;

LAB27:    t31 = (t30 + 4);
    t7 = *((unsigned int *)t31);
    t8 = (~(t7));
    t9 = *((unsigned int *)t30);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(500, ng0);

LAB33:    xsi_set_current_line(501, ng0);
    t2 = (t0 + 12144);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 12144);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);

LAB31:    xsi_set_current_line(504, ng0);
    t2 = (t0 + 9584);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9584);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 9584);
    t20 = (t19 + 64U);
    t28 = *((char **)t20);
    t29 = (t0 + 12144);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_array_select_value(t4, 8, t5, t13, t28, 2, 1, t32, 4, 2);
    t33 = (t0 + 12304);
    xsi_vlogvar_assign_value(t33, t4, 0, 0, 8);

LAB21:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(490, ng0);

LAB13:    xsi_set_current_line(491, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 12144);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    xsi_set_current_line(492, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 12304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB12;

LAB17:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(495, ng0);

LAB22:    xsi_set_current_line(496, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 12304);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 8);
    goto LAB21;

LAB25:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(498, ng0);

LAB32:    xsi_set_current_line(499, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 12144);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 4);
    goto LAB31;

}


extern void work_m_00000000002386964647_2883180470_init()
{
	static char *pe[] = {(void *)Cont_62_0,(void *)Cont_63_1,(void *)Cont_65_2,(void *)Cont_67_3,(void *)Cont_69_4,(void *)Always_137_5,(void *)Always_172_6,(void *)Always_294_7,(void *)Always_403_8,(void *)Always_423_9,(void *)Always_489_10};
	static char *se[] = {(void *)sp_RxDecodeReset,(void *)sp_RxDataClear,(void *)sp_isSpecial};
	xsi_register_didat("work_m_00000000002386964647_2883180470", "isim/test2sr_isim_beh.exe.sim/work/m_00000000002386964647_2883180470.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
