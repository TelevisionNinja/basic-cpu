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
extern char *STD_TEXTIO;
static const char *ng1 = "in_file";
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
static const char *ng4 = "E:/Backup/Document/GitHub/CSCE2214/Lab09/Lab08_Solution/Memory.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


char *work_a_1525071888_0318166943_sub_570049570_1453620706(char *t1)
{
    char t2[328];
    char t13[16];
    char t20[8];
    char t24[32];
    char t32[248];
    char t44[16];
    char *t0;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned char t40;
    char *t41;
    char *t42;
    unsigned char t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;

LAB0:    t4 = ((STD_TEXTIO) + 3440);
    t5 = (t2 + 4U);
    t6 = xsi_create_file_variable_in_buffer(0, ng1, t4, 0, 0, 1);
    *((char **)t5) = t6;
    t7 = (t2 + 12U);
    t8 = ((STD_TEXTIO) + 3280);
    t9 = (t7 + 56U);
    *((char **)t9) = t8;
    t10 = (t7 + 40U);
    *((char **)t10) = 0;
    t11 = (t7 + 64U);
    *((int *)t11) = 1;
    t12 = (t7 + 48U);
    *((char **)t12) = 0;
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 7;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - 7);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t2 + 84U);
    t18 = ((STD_STANDARD) + 1112);
    t19 = (t15 + 88U);
    *((char **)t19) = t18;
    t21 = (t15 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, t13);
    t22 = (t15 + 64U);
    *((char **)t22) = t13;
    t23 = (t15 + 80U);
    *((unsigned int *)t23) = 8U;
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 0;
    t26 = (t25 + 4U);
    *((int *)t26) = 30;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t27 = (30 - 0);
    t17 = (t27 * 1);
    t17 = (t17 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t17;
    t26 = (t24 + 16U);
    t28 = (t26 + 0U);
    *((int *)t28) = 7;
    t28 = (t26 + 4U);
    *((int *)t28) = 0;
    t28 = (t26 + 8U);
    *((int *)t28) = -1;
    t29 = (0 - 7);
    t17 = (t29 * -1);
    t17 = (t17 + 1);
    t28 = (t26 + 12U);
    *((unsigned int *)t28) = t17;
    t28 = (t2 + 204U);
    t30 = (t1 + 4824);
    t31 = (t28 + 88U);
    *((char **)t31) = t30;
    t33 = (t28 + 56U);
    *((char **)t33) = t32;
    xsi_type_set_default_value(t30, t32, 0);
    t34 = (t28 + 64U);
    t35 = (t30 + 80U);
    t36 = *((char **)t35);
    *((char **)t34) = t36;
    t37 = (t28 + 80U);
    *((unsigned int *)t37) = 248U;
    t38 = (t1 + 7032U);
    t39 = (t38 + 12U);
    t17 = *((unsigned int *)t39);
    t40 = (t17 == 0);
    if (t40 != 0)
        goto LAB2;

LAB4:
LAB3:    t4 = (t2 + 4U);
    t5 = *((char **)t4);
    t6 = (t1 + 7445);
    t9 = (t1 + 7032U);
    std_textio_file_open1(t5, t6, t9, (unsigned char)0);
    t16 = 0;
    t27 = 30;

LAB8:    if (t16 <= t27)
        goto LAB9;

LAB11:    t4 = (t28 + 56U);
    t5 = *((char **)t4);
    t40 = (248U != 248U);
    if (t40 == 1)
        goto LAB13;

LAB14:    t0 = xsi_get_transient_memory(248U);
    memcpy(t0, t5, 248U);

LAB1:    xsi_access_variable_delete(t7);
    t4 = (t2 + 4U);
    t5 = *((char **)t4);
    xsi_delete_file_variable(t5);
    return t0;
LAB2:    t41 = (t28 + 56U);
    t42 = *((char **)t41);
    t43 = (248U != 248U);
    if (t43 == 1)
        goto LAB5;

LAB6:    t0 = xsi_get_transient_memory(248U);
    memcpy(t0, t42, 248U);
    goto LAB1;

LAB5:    xsi_size_not_matching(248U, 248U, 0);
    goto LAB6;

LAB7:    goto LAB3;

LAB9:    t4 = (t2 + 4U);
    t5 = *((char **)t4);
    std_textio_readline(STD_TEXTIO, (char *)0, t5, t7);
    t4 = (t15 + 56U);
    t5 = *((char **)t4);
    std_textio_read4(STD_TEXTIO, (char *)0, t7, t5, t13);
    t4 = (t15 + 56U);
    t5 = *((char **)t4);
    t4 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t44, t5, t13);
    t6 = (t28 + 56U);
    t8 = *((char **)t6);
    t29 = (t16 - 0);
    t17 = (t29 * 1);
    xsi_vhdl_check_range_of_index(0, 30, 1, t16);
    t45 = (8U * t17);
    t46 = (0 + t45);
    t6 = (t8 + t46);
    t9 = (t44 + 12U);
    t47 = *((unsigned int *)t9);
    t47 = (t47 * 1U);
    memcpy(t6, t4, t47);

LAB10:    if (t16 == t27)
        goto LAB11;

LAB12:    t29 = (t16 + 1);
    t16 = t29;
    goto LAB8;

LAB13:    xsi_size_not_matching(248U, 248U, 0);
    goto LAB14;

LAB15:;
}

static void work_a_1525071888_0318166943_p_0(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;

LAB0:    xsi_set_current_line(93, ng4);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4168);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(94, ng4);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t7 = (15 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t6 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 7;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 7);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t1, t10);
    t16 = (t15 - 0);
    t14 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 30, 1, t15);
    t17 = (8U * t14);
    t18 = (0 + t17);
    t12 = (t5 + t18);
    t19 = (t0 + 4264);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t12, 8U);
    xsi_driver_first_trans_delta(t19, 8U, 8U, 0LL);
    xsi_set_current_line(95, ng4);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t7 = (15 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t5 + t9);
    t6 = (t10 + 0U);
    t11 = (t6 + 0U);
    *((int *)t11) = 7;
    t11 = (t6 + 4U);
    *((int *)t11) = 0;
    t11 = (t6 + 8U);
    *((int *)t11) = -1;
    t13 = (0 - 7);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t11 = (t6 + 12U);
    *((unsigned int *)t11) = t14;
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t1, t10);
    t16 = (t15 + 1);
    t24 = (t16 - 0);
    t14 = (t24 * 1);
    xsi_vhdl_check_range_of_index(0, 30, 1, t16);
    t17 = (8U * t14);
    t18 = (0 + t17);
    t11 = (t2 + t18);
    t12 = (t0 + 4264);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t11, 8U);
    xsi_driver_first_trans_delta(t12, 0U, 8U, 0LL);
    goto LAB3;

}

static void work_a_1525071888_0318166943_p_1(char *t0)
{
    char t17[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    xsi_set_current_line(101, ng4);
    t2 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4184);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(102, ng4);
    t4 = (t0 + 1672U);
    t8 = *((char **)t4);
    t9 = (15 - 7);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t4 = (t8 + t11);
    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t14 = (15 - 7);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 7;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t22 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t12, t17);
    t23 = (t22 - 0);
    t21 = (t23 * 1);
    t24 = (8U * t21);
    t25 = (0U + t24);
    t19 = (t0 + 4328);
    t26 = (t19 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t4, 8U);
    xsi_driver_first_trans_delta(t19, t25, 8U, 0LL);
    xsi_set_current_line(103, ng4);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t9 = (15 - 15);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t4 + t11);
    t5 = (t0 + 1512U);
    t8 = *((char **)t5);
    t14 = (15 - 7);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t5 = (t8 + t16);
    t12 = (t17 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 7;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t20 = (0 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t21;
    t22 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t17);
    t23 = (t22 + 1);
    t30 = (t23 - 0);
    t21 = (t30 * 1);
    t24 = (8U * t21);
    t25 = (0U + t24);
    t13 = (t0 + 4328);
    t18 = (t13 + 56U);
    t19 = *((char **)t18);
    t26 = (t19 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t2, 8U);
    xsi_driver_first_trans_delta(t13, t25, 8U, 0LL);
    goto LAB3;

LAB5:    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}


extern void work_a_1525071888_0318166943_init()
{
	static char *pe[] = {(void *)work_a_1525071888_0318166943_p_0,(void *)work_a_1525071888_0318166943_p_1};
	static char *se[] = {(void *)work_a_1525071888_0318166943_sub_570049570_1453620706};
	xsi_register_didat("work_a_1525071888_0318166943", "isim/CPU_2214_Test_isim_beh.exe.sim/work/a_1525071888_0318166943.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
