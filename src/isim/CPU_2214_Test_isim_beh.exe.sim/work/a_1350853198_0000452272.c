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
static const char *ng0 = "E:/Backup/Document/GitHub/CSCE2214/Lab09/Lab08_Solution/Registers.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_1350853198_0000452272_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB39;

LAB40:    t3 = (unsigned char)0;

LAB41:    if (t3 != 0)
        goto LAB37;

LAB38:
LAB3:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 8231);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB45;

LAB46:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 240U, 16U, 0LL);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 8247);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB47;

LAB48:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 224U, 16U, 0LL);
    t1 = (t0 + 4448);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 7975);
    t6 = (16U != 16U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 4560);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_delta(t7, 240U, 16U, 0LL);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 7991);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB7;

LAB8:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 224U, 16U, 0LL);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 8007);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB9;

LAB10:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 208U, 16U, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 8023);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB11;

LAB12:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 192U, 16U, 0LL);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 8039);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB13;

LAB14:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 176U, 16U, 0LL);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 8055);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB15;

LAB16:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 160U, 16U, 0LL);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 8071);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB17;

LAB18:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 144U, 16U, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 8087);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB19;

LAB20:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 128U, 16U, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 8103);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB21;

LAB22:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 112U, 16U, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 8119);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB23;

LAB24:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 96U, 16U, 0LL);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 8135);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB25;

LAB26:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 80U, 16U, 0LL);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 8151);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB27;

LAB28:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 64U, 16U, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 8167);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB29;

LAB30:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 48U, 16U, 0LL);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 8183);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB31;

LAB32:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 32U, 16U, 0LL);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 8199);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB33;

LAB34:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 16U, 16U, 0LL);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 8215);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB35;

LAB36:    t5 = (t0 + 4560);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 0U, 16U, 0LL);
    goto LAB3;

LAB5:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB10;

LAB11:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB36;

LAB37:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1672U);
    t7 = *((char **)t2);
    t13 = *((unsigned char *)t7);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB3;

LAB39:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t12 = (t6 == (unsigned char)3);
    t3 = t12;
    goto LAB41;

LAB42:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1512U);
    t8 = *((char **)t2);
    t2 = (t0 + 1352U);
    t9 = *((char **)t2);
    t2 = (t0 + 7552U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t9, t2);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (16U * t17);
    t19 = (0U + t18);
    t10 = (t0 + 4560);
    t11 = (t10 + 56U);
    t20 = *((char **)t11);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t8, 16U);
    xsi_driver_first_trans_delta(t10, t19, 16U, 0LL);
    goto LAB43;

LAB45:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB46;

LAB47:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB48;

}

static void work_a_1350853198_0000452272_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t1 = (t0 + 7584U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 15);
    t6 = (t5 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 4624);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 4464);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1350853198_0000452272_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(57, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 7600U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 15);
    t6 = (t5 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t4);
    t7 = (16U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 4688);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 4480);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1350853198_0000452272_init()
{
	static char *pe[] = {(void *)work_a_1350853198_0000452272_p_0,(void *)work_a_1350853198_0000452272_p_1,(void *)work_a_1350853198_0000452272_p_2};
	xsi_register_didat("work_a_1350853198_0000452272", "isim/CPU_2214_Test_isim_beh.exe.sim/work/a_1350853198_0000452272.didat");
	xsi_register_executes(pe);
}
