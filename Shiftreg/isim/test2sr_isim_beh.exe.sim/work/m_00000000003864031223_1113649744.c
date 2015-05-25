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
static const char *ng0 = "C:/Users/Crazyfingers/Documents/Atlys-General/atlys-general/Shiftreg/Source/test2sr.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 1U};
static unsigned int ng5[] = {244U, 0U};
static unsigned int ng6[] = {126U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {85U, 0U};
static unsigned int ng9[] = {87U, 0U};
static unsigned int ng10[] = {254U, 0U};
static unsigned int ng11[] = {65U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {192U, 0U};
static unsigned int ng14[] = {240U, 0U};
static unsigned int ng15[] = {252U, 0U};
static unsigned int ng16[] = {255U, 0U};



static int sp_uartsend(char *t1, char *t2)
{
    char t16[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t5 = (t1 + 2680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(66, ng0);

LAB17:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 2520);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_set_current_line(57, ng0);

LAB9:    xsi_set_current_line(58, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t1 + 2520);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 17360000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB10:    xsi_set_current_line(60, ng0);
    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB11:    t4 = (t1 + 3160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 32, t6, 32, t7, 32);
    t8 = (t16 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t16);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 2520);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 17360000LL);
    *((char **)t3) = &&LAB16;
    t0 = 1;
    goto LAB1;

LAB12:    xsi_set_current_line(60, ng0);

LAB14:    xsi_set_current_line(61, ng0);
    t14 = (t1 + 3000);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t19 = (t1 + 3000);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 3160);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_index_select_value(t18, 1, t17, t21, 2, t24, 32, 1);
    t25 = (t1 + 2520);
    xsi_vlogvar_assign_value(t25, t18, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 17360000LL);
    *((char **)t3) = &&LAB15;
    t0 = 1;
    goto LAB1;

LAB15:    xsi_set_current_line(60, ng0);
    t4 = (t1 + 3160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_signed_add(t16, 32, t6, 32, t7, 32);
    t8 = (t1 + 3160);
    xsi_vlogvar_assign_value(t8, t16, 0, 0, 32);
    goto LAB11;

LAB16:    goto LAB8;

}

static void Always_72_0(char *t0)
{
    char t8[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 4080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4896);
    *((int *)t2) = 1;
    t3 = (t0 + 4112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 2520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
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

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(75, ng0);

LAB14:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2360);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);

LAB13:    xsi_set_current_line(74, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 2360);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB12;

}

static void Initial_87_1(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);

LAB4:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB11:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB13:    if (t15 != 0)
        goto LAB14;

LAB9:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB10:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB12:;
LAB14:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB11;
    goto LAB1;

LAB15:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB18:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB20:    if (t15 != 0)
        goto LAB21;

LAB16:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB17:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB19:;
LAB21:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB18;
    goto LAB1;

LAB22:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB25:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB27:    if (t15 != 0)
        goto LAB28;

LAB23:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB24:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB26:;
LAB28:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB25;
    goto LAB1;

LAB29:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB32:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB34:    if (t15 != 0)
        goto LAB35;

LAB30:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB31:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB33:;
LAB35:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB32;
    goto LAB1;

LAB36:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB39:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB41:    if (t15 != 0)
        goto LAB42;

LAB37:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB38:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB40:;
LAB42:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB39;
    goto LAB1;

LAB43:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB46:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB48:    if (t15 != 0)
        goto LAB49;

LAB44:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB45:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB47:;
LAB49:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB46;
    goto LAB1;

LAB50:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB53:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB55:    if (t15 != 0)
        goto LAB56;

LAB51:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB52:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB54:;
LAB56:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB53;
    goto LAB1;

LAB57:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB60:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB62:    if (t15 != 0)
        goto LAB63;

LAB58:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB59:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB61:;
LAB63:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB60;
    goto LAB1;

LAB64:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB67:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB69:    if (t15 != 0)
        goto LAB70;

LAB65:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB66:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB68:;
LAB70:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB67;
    goto LAB1;

LAB71:    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB74:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB76:    if (t15 != 0)
        goto LAB77;

LAB72:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB73:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB75:;
LAB77:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB74;
    goto LAB1;

LAB78:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB81:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB83:    if (t15 != 0)
        goto LAB84;

LAB79:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB80:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB82:;
LAB84:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB81;
    goto LAB1;

LAB85:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB88:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB90:    if (t15 != 0)
        goto LAB91;

LAB86:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB87:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB89:;
LAB91:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB88;
    goto LAB1;

LAB92:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB95:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB97:    if (t15 != 0)
        goto LAB98;

LAB93:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB94:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB96:;
LAB98:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB95;
    goto LAB1;

LAB99:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB102:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB104:    if (t15 != 0)
        goto LAB105;

LAB100:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB101:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB103:;
LAB105:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB102;
    goto LAB1;

LAB106:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB109:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB111:    if (t15 != 0)
        goto LAB112;

LAB107:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB108:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4136);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB113;
    goto LAB1;

LAB110:;
LAB112:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB109;
    goto LAB1;

LAB113:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4136);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 9);

LAB116:    t7 = (t0 + 4232);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB118:    if (t15 != 0)
        goto LAB119;

LAB114:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB115:    t16 = (t0 + 4232);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 4136);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB1;

LAB117:;
LAB119:    t7 = (t0 + 4328U);
    *((char **)t7) = &&LAB116;
    goto LAB1;

}

static void Always_159_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 4384);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 1880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1880);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_00000000003864031223_1113649744_init()
{
	static char *pe[] = {(void *)Always_72_0,(void *)Initial_87_1,(void *)Always_159_2};
	static char *se[] = {(void *)sp_uartsend};
	xsi_register_didat("work_m_00000000003864031223_1113649744", "isim/test2sr_isim_beh.exe.sim/work/m_00000000003864031223_1113649744.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
