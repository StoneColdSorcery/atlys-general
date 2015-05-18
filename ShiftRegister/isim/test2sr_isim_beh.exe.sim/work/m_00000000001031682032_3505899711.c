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
static const char *ng0 = "C:/Users/Crazyfingers/Documents/Atlys Projects/ShiftRegister/UART.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {9, 0};



static void Always_75_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t32[8];
    char t43[8];
    char t51[8];
    char t93[8];
    char t129[8];
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t128;
    char *t130;
    int t131;

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 6456);
    *((int *)t2) = 1;
    t3 = (t0 + 5920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(87, ng0);

LAB13:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB150;

LAB148:    if (*((unsigned int *)t2) == 0)
        goto LAB147;

LAB149:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB150:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB151;

LAB152:
LAB153:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(76, ng0);

LAB12:    xsi_set_current_line(77, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB11;

LAB14:    xsi_set_current_line(92, ng0);

LAB17:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 3848);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 8, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(97, ng0);

LAB21:    xsi_set_current_line(99, ng0);
    t5 = (t0 + 4968);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t13) == 0)
        goto LAB22;

LAB24:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;

LAB25:    memset(t21, 0, 8);
    t20 = (t4 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t20) != 0)
        goto LAB28;

LAB29:    t28 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB30;

LAB31:    memcpy(t51, t21, 8);

LAB32:    t83 = (t51 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t51);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB44;

LAB45:
LAB46:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB20;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t21) = 1;
    goto LAB29;

LAB28:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB29;

LAB30:    t33 = (t0 + 4808);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t35 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB36;

LAB34:    if (*((unsigned int *)t36) == 0)
        goto LAB33;

LAB35:    t42 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t42) = 1;

LAB36:    memset(t43, 0, 8);
    t44 = (t32 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t32);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t44) != 0)
        goto LAB39;

LAB40:    t52 = *((unsigned int *)t21);
    t53 = *((unsigned int *)t43);
    t54 = (t52 & t53);
    *((unsigned int *)t51) = t54;
    t55 = (t21 + 4);
    t56 = (t43 + 4);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB33:    *((unsigned int *)t32) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t43) = 1;
    goto LAB40;

LAB39:    t50 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB40;

LAB41:    t63 = *((unsigned int *)t51);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t51) = (t63 | t64);
    t65 = (t21 + 4);
    t66 = (t43 + 4);
    t67 = *((unsigned int *)t21);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (~(t69));
    t71 = *((unsigned int *)t43);
    t72 = (~(t71));
    t73 = *((unsigned int *)t66);
    t74 = (~(t73));
    t75 = (t68 & t70);
    t76 = (t72 & t74);
    t77 = (~(t75));
    t78 = (~(t76));
    t79 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t79 & t77);
    t80 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t80 & t78);
    t81 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t81 & t77);
    t82 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t82 & t78);
    goto LAB43;

LAB44:    xsi_set_current_line(99, ng0);

LAB47:    xsi_set_current_line(100, ng0);
    t89 = ((char*)((ng2)));
    t90 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t90, t89, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB46;

LAB48:    xsi_set_current_line(105, ng0);

LAB51:    xsi_set_current_line(106, ng0);
    t12 = (t0 + 4008);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t19, 4, t20, 32);
    t27 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t27, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4008);
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB55;

LAB52:    if (t18 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t4) = 1;

LAB55:    t20 = (t4 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t29 = (t26 & t25);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB56;

LAB57:
LAB58:    goto LAB50;

LAB54:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(108, ng0);

LAB59:    xsi_set_current_line(109, ng0);
    t27 = (t0 + 4808);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    t34 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t35 = (t33 + 4);
    t36 = (t34 + 4);
    t31 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t31 ^ t37);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t36);
    t41 = (t39 ^ t40);
    t45 = (t38 | t41);
    t46 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t36);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t52 = (t45 & t49);
    if (t52 != 0)
        goto LAB63;

LAB60:    if (t48 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t21) = 1;

LAB63:    memset(t32, 0, 8);
    t44 = (t21 + 4);
    t53 = *((unsigned int *)t44);
    t54 = (~(t53));
    t58 = *((unsigned int *)t21);
    t59 = (t58 & t54);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t44) != 0)
        goto LAB66;

LAB67:    t55 = (t32 + 4);
    t61 = *((unsigned int *)t32);
    t62 = *((unsigned int *)t55);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB68;

LAB69:    memcpy(t93, t32, 8);

LAB70:    t120 = (t93 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t93);
    t124 = (t123 & t122);
    t125 = (t124 != 0);
    if (t125 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(111, ng0);

LAB86:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB88;

LAB87:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB88;

LAB91:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB89;

LAB90:    memset(t21, 0, 8);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t20) != 0)
        goto LAB94;

LAB95:    t28 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t28);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB96;

LAB97:    memcpy(t51, t21, 8);

LAB98:    t90 = (t51 + 4);
    t64 = *((unsigned int *)t90);
    t67 = (~(t64));
    t68 = *((unsigned int *)t51);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB111;

LAB112:
LAB113:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB120;

LAB117:    if (t18 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t4) = 1;

LAB120:    t20 = (t4 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t29 = (t26 & t25);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB121;

LAB122:
LAB123:
LAB84:    goto LAB58;

LAB62:    t42 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t32) = 1;
    goto LAB67;

LAB66:    t50 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB67;

LAB68:    t56 = (t0 + 4168);
    t57 = (t56 + 56U);
    t65 = *((char **)t57);
    t66 = ((char*)((ng1)));
    memset(t43, 0, 8);
    t83 = (t65 + 4);
    t89 = (t66 + 4);
    t64 = *((unsigned int *)t65);
    t67 = *((unsigned int *)t66);
    t68 = (t64 ^ t67);
    t69 = *((unsigned int *)t83);
    t70 = *((unsigned int *)t89);
    t71 = (t69 ^ t70);
    t72 = (t68 | t71);
    t73 = *((unsigned int *)t83);
    t74 = *((unsigned int *)t89);
    t77 = (t73 | t74);
    t78 = (~(t77));
    t79 = (t72 & t78);
    if (t79 != 0)
        goto LAB74;

LAB71:    if (t77 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t43) = 1;

LAB74:    memset(t51, 0, 8);
    t91 = (t43 + 4);
    t80 = *((unsigned int *)t91);
    t81 = (~(t80));
    t82 = *((unsigned int *)t43);
    t84 = (t82 & t81);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t91) != 0)
        goto LAB77;

LAB78:    t86 = *((unsigned int *)t32);
    t87 = *((unsigned int *)t51);
    t88 = (t86 & t87);
    *((unsigned int *)t93) = t88;
    t94 = (t32 + 4);
    t95 = (t51 + 4);
    t96 = (t93 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB79;

LAB80:
LAB81:    goto LAB70;

LAB73:    t90 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t51) = 1;
    goto LAB78;

LAB77:    t92 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB78;

LAB79:    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t93) = (t102 | t103);
    t104 = (t32 + 4);
    t105 = (t51 + 4);
    t106 = *((unsigned int *)t32);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (~(t108));
    t110 = *((unsigned int *)t51);
    t111 = (~(t110));
    t112 = *((unsigned int *)t105);
    t113 = (~(t112));
    t75 = (t107 & t109);
    t76 = (t111 & t113);
    t114 = (~(t75));
    t115 = (~(t76));
    t116 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t116 & t114);
    t117 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t117 & t115);
    t118 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t118 & t114);
    t119 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t119 & t115);
    goto LAB81;

LAB82:    xsi_set_current_line(109, ng0);

LAB85:    xsi_set_current_line(110, ng0);
    t126 = ((char*)((ng1)));
    t127 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t127, t126, 0, 0, 1, 0LL);
    goto LAB84;

LAB88:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB90;

LAB89:    *((unsigned int *)t4) = 1;
    goto LAB90;

LAB92:    *((unsigned int *)t21) = 1;
    goto LAB95;

LAB94:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB95;

LAB96:    t33 = (t0 + 4168);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t32, 0, 8);
    t42 = (t35 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB100;

LAB99:    t44 = (t36 + 4);
    if (*((unsigned int *)t44) != 0)
        goto LAB100;

LAB103:    if (*((unsigned int *)t35) < *((unsigned int *)t36))
        goto LAB101;

LAB102:    memset(t43, 0, 8);
    t55 = (t32 + 4);
    t17 = *((unsigned int *)t55);
    t18 = (~(t17));
    t22 = *((unsigned int *)t32);
    t23 = (t22 & t18);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t55) != 0)
        goto LAB106;

LAB107:    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t43);
    t29 = (t25 & t26);
    *((unsigned int *)t51) = t29;
    t57 = (t21 + 4);
    t65 = (t43 + 4);
    t66 = (t51 + 4);
    t30 = *((unsigned int *)t57);
    t31 = *((unsigned int *)t65);
    t37 = (t30 | t31);
    *((unsigned int *)t66) = t37;
    t38 = *((unsigned int *)t66);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB108;

LAB109:
LAB110:    goto LAB98;

LAB100:    t50 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB102;

LAB101:    *((unsigned int *)t32) = 1;
    goto LAB102;

LAB104:    *((unsigned int *)t43) = 1;
    goto LAB107;

LAB106:    t56 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB107;

LAB108:    t40 = *((unsigned int *)t51);
    t41 = *((unsigned int *)t66);
    *((unsigned int *)t51) = (t40 | t41);
    t83 = (t21 + 4);
    t89 = (t43 + 4);
    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t83);
    t48 = (~(t47));
    t49 = *((unsigned int *)t43);
    t52 = (~(t49));
    t53 = *((unsigned int *)t89);
    t54 = (~(t53));
    t75 = (t46 & t48);
    t76 = (t52 & t54);
    t58 = (~(t75));
    t59 = (~(t76));
    t60 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t60 & t58);
    t61 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t61 & t59);
    t62 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t62 & t58);
    t63 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t63 & t59);
    goto LAB110;

LAB111:    xsi_set_current_line(114, ng0);

LAB114:    xsi_set_current_line(115, ng0);
    t91 = (t0 + 4808);
    t92 = (t91 + 56U);
    t94 = *((char **)t92);
    t95 = (t0 + 3848);
    t96 = (t0 + 3848);
    t104 = (t96 + 72U);
    t105 = *((char **)t104);
    t120 = (t0 + 4168);
    t126 = (t120 + 56U);
    t127 = *((char **)t126);
    t128 = ((char*)((ng2)));
    memset(t129, 0, 8);
    xsi_vlog_unsigned_minus(t129, 32, t127, 4, t128, 32);
    xsi_vlog_generic_convert_bit_index(t93, t105, 2, t129, 32, 2);
    t130 = (t93 + 4);
    t71 = *((unsigned int *)t130);
    t131 = (!(t71));
    if (t131 == 1)
        goto LAB115;

LAB116:    goto LAB113;

LAB115:    xsi_vlogvar_wait_assign_value(t95, t94, 0, *((unsigned int *)t93), 1, 0LL);
    goto LAB116;

LAB119:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(117, ng0);

LAB124:    xsi_set_current_line(118, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4808);
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
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB128;

LAB125:    if (t18 != 0)
        goto LAB127;

LAB126:    *((unsigned int *)t4) = 1;

LAB128:    t20 = (t4 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t29 = (t26 & t25);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(122, ng0);

LAB133:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t6) != 0)
        goto LAB136;

LAB137:    t13 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB138;

LAB139:    t17 = *((unsigned int *)t21);
    t18 = (~(t17));
    t22 = *((unsigned int *)t13);
    t23 = (t18 || t22);
    if (t23 > 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t13) > 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t21) > 0)
        goto LAB144;

LAB145:    memcpy(t4, t20, 8);

LAB146:    t27 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t27, t4, 0, 0, 1, 0LL);

LAB131:    goto LAB123;

LAB127:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB128;

LAB129:    xsi_set_current_line(120, ng0);

LAB132:    xsi_set_current_line(121, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t28, t27, 0, 0, 1, 0LL);
    goto LAB131;

LAB134:    *((unsigned int *)t21) = 1;
    goto LAB137;

LAB136:    t12 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB137;

LAB138:    t19 = ((char*)((ng1)));
    goto LAB139;

LAB140:    t20 = ((char*)((ng2)));
    goto LAB141;

LAB142:    xsi_vlog_unsigned_bit_combine(t4, 32, t19, 32, t20, 32);
    goto LAB146;

LAB144:    memcpy(t4, t19, 8);
    goto LAB146;

LAB147:    *((unsigned int *)t4) = 1;
    goto LAB150;

LAB151:    xsi_set_current_line(133, ng0);

LAB154:    xsi_set_current_line(134, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 1, 0LL);
    goto LAB153;

}

static void Always_139_1(char *t0)
{
    char t13[8];
    char t28[8];
    char t29[8];
    char t34[8];
    char t76[8];
    char t84[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
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
    char *t26;
    char *t27;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    t3 = (t0 + 6168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(140, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(146, ng0);

LAB9:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t2) != 0)
        goto LAB25;

LAB26:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB27;

LAB28:    memcpy(t34, t13, 8);

LAB29:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB92;

LAB90:    if (*((unsigned int *)t2) == 0)
        goto LAB89;

LAB91:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB92:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(140, ng0);

LAB8:    xsi_set_current_line(141, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB7;

LAB10:    xsi_set_current_line(147, ng0);

LAB13:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t12 = (t11 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t12) == 0)
        goto LAB14;

LAB16:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;

LAB17:    t20 = (t13 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(150, ng0);

LAB22:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB20:    goto LAB12;

LAB14:    *((unsigned int *)t13) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(148, ng0);

LAB21:    xsi_set_current_line(149, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    goto LAB20;

LAB23:    *((unsigned int *)t13) = 1;
    goto LAB26;

LAB25:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB26;

LAB27:    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    memset(t28, 0, 8);
    t20 = (t19 + 4);
    t17 = *((unsigned int *)t20);
    t18 = (~(t17));
    t21 = *((unsigned int *)t19);
    t22 = (t21 & t18);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t20) == 0)
        goto LAB30;

LAB32:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;

LAB33:    memset(t29, 0, 8);
    t27 = (t28 + 4);
    t24 = *((unsigned int *)t27);
    t25 = (~(t24));
    t30 = *((unsigned int *)t28);
    t31 = (t30 & t25);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t27) != 0)
        goto LAB36;

LAB37:    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t29);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t13 + 4);
    t39 = (t29 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB30:    *((unsigned int *)t28) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t29) = 1;
    goto LAB37;

LAB36:    t33 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB37;

LAB38:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t13 + 4);
    t49 = (t29 + 4);
    t50 = *((unsigned int *)t13);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t29);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB40;

LAB41:    xsi_set_current_line(155, ng0);

LAB44:    xsi_set_current_line(156, ng0);
    t72 = (t0 + 3688);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng2)));
    memset(t76, 0, 8);
    xsi_vlog_unsigned_add(t76, 32, t74, 4, t75, 32);
    t77 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t77, t76, 0, 0, 4, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t13) = 1;

LAB48:    t20 = (t13 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t30 = (t25 & t24);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB49;

LAB50:
LAB51:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB54;

LAB53:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB55;

LAB56:    memset(t28, 0, 8);
    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t20) != 0)
        goto LAB60;

LAB61:    t27 = (t28 + 4);
    t14 = *((unsigned int *)t28);
    t15 = *((unsigned int *)t27);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB62;

LAB63:    memcpy(t76, t28, 8);

LAB64:    t80 = (t76 + 4);
    t61 = *((unsigned int *)t80);
    t62 = (~(t61));
    t63 = *((unsigned int *)t76);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB77;

LAB78:
LAB79:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB84;

LAB81:    if (t18 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t13) = 1;

LAB84:    t20 = (t13 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t30 = (t25 & t24);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB85;

LAB86:
LAB87:    goto LAB43;

LAB47:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(157, ng0);

LAB52:    xsi_set_current_line(158, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    goto LAB51;

LAB54:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB56;

LAB55:    *((unsigned int *)t13) = 1;
    goto LAB56;

LAB58:    *((unsigned int *)t28) = 1;
    goto LAB61;

LAB60:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB61;

LAB62:    t33 = (t0 + 3688);
    t38 = (t33 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng4)));
    memset(t29, 0, 8);
    t48 = (t39 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB66;

LAB65:    t49 = (t40 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t39) < *((unsigned int *)t40))
        goto LAB67;

LAB68:    memset(t34, 0, 8);
    t72 = (t29 + 4);
    t17 = *((unsigned int *)t72);
    t18 = (~(t17));
    t21 = *((unsigned int *)t29);
    t22 = (t21 & t18);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t72) != 0)
        goto LAB72;

LAB73:    t24 = *((unsigned int *)t28);
    t25 = *((unsigned int *)t34);
    t30 = (t24 & t25);
    *((unsigned int *)t76) = t30;
    t74 = (t28 + 4);
    t75 = (t34 + 4);
    t77 = (t76 + 4);
    t31 = *((unsigned int *)t74);
    t32 = *((unsigned int *)t75);
    t35 = (t31 | t32);
    *((unsigned int *)t77) = t35;
    t36 = *((unsigned int *)t77);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB64;

LAB66:    t66 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB68;

LAB67:    *((unsigned int *)t29) = 1;
    goto LAB68;

LAB70:    *((unsigned int *)t34) = 1;
    goto LAB73;

LAB72:    t73 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB73;

LAB74:    t41 = *((unsigned int *)t76);
    t42 = *((unsigned int *)t77);
    *((unsigned int *)t76) = (t41 | t42);
    t78 = (t28 + 4);
    t79 = (t34 + 4);
    t43 = *((unsigned int *)t28);
    t44 = (~(t43));
    t45 = *((unsigned int *)t78);
    t46 = (~(t45));
    t47 = *((unsigned int *)t34);
    t50 = (~(t47));
    t51 = *((unsigned int *)t79);
    t52 = (~(t51));
    t58 = (t44 & t46);
    t59 = (t50 & t52);
    t53 = (~(t58));
    t54 = (~(t59));
    t55 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t55 & t53);
    t56 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t56 & t54);
    t57 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t57 & t53);
    t60 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t60 & t54);
    goto LAB76;

LAB77:    xsi_set_current_line(160, ng0);

LAB80:    xsi_set_current_line(161, ng0);
    t81 = (t0 + 3368);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t85 = (t0 + 3368);
    t86 = (t85 + 72U);
    t87 = *((char **)t86);
    t88 = (t0 + 3688);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = ((char*)((ng2)));
    memset(t92, 0, 8);
    xsi_vlog_unsigned_minus(t92, 32, t90, 4, t91, 32);
    xsi_vlog_generic_get_index_select_value(t84, 1, t83, t87, 2, t92, 32, 2);
    t93 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t93, t84, 0, 0, 1, 0LL);
    goto LAB79;

LAB83:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(163, ng0);

LAB88:    xsi_set_current_line(164, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB87;

LAB89:    *((unsigned int *)t13) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(169, ng0);

LAB96:    xsi_set_current_line(170, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB95;

}


extern void work_m_00000000001031682032_3505899711_init()
{
	static char *pe[] = {(void *)Always_75_0,(void *)Always_139_1};
	xsi_register_didat("work_m_00000000001031682032_3505899711", "isim/test2sr_isim_beh.exe.sim/work/m_00000000001031682032_3505899711.didat");
	xsi_register_executes(pe);
}
