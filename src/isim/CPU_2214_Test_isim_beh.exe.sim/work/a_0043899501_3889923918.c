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
static const char *ng0 = "E:/Backup/Document/GitHub/CSCE2214/Lab09/Lab08_Solution/CPU_2214_Test.vhd";



static void work_a_0043899501_3889923918_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int t8;
    int t9;
    int t10;

LAB0:    t1 = (t0 + 2752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(28, ng0);
    t7 = (50 * 1000LL);
    t2 = (t0 + 2560);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1768U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t2 = (t0 + 5651);
    *((int *)t2) = 1;
    t4 = (t0 + 5655);
    *((int *)t4) = t8;
    t9 = 1;
    t10 = t8;

LAB8:    if (t9 <= t10)
        goto LAB9;

LAB11:    xsi_set_current_line(90, ng0);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 1648U);
    t6 = *((char **)t5);
    t7 = *((int64 *)t6);
    t5 = (t0 + 2560);
    xsi_process_wait(t5, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 5651);
    t9 = *((int *)t2);
    t3 = (t0 + 5655);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB11;

LAB16:    t8 = (t9 + 1);
    t9 = t8;
    t4 = (t0 + 5651);
    *((int *)t4) = t9;
    goto LAB8;

LAB12:    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}

static void work_a_0043899501_3889923918_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int64 t11;
    int64 t12;
    int t13;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5659);
    *((int *)t2) = 0;
    t3 = (t0 + 5663);
    *((int *)t3) = 50;
    t4 = 0;
    t5 = 50;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(99, ng0);

LAB19:    *((char **)t1) = &&LAB20;

LAB1:    return;
LAB5:    xsi_set_current_line(96, ng0);
    t6 = (t0 + 3448);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t11 = *((int64 *)t3);
    t12 = (t11 / 2);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, t12);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 5659);
    t4 = *((int *)t2);
    t3 = (t0 + 5663);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB16:    t13 = (t4 + 1);
    t4 = t13;
    t6 = (t0 + 5659);
    *((int *)t6) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3448);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t11 = *((int64 *)t3);
    t12 = (t11 / 2);
    t2 = (t0 + 2808);
    xsi_process_wait(t2, t12);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB6;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}


extern void work_a_0043899501_3889923918_init()
{
	static char *pe[] = {(void *)work_a_0043899501_3889923918_p_0,(void *)work_a_0043899501_3889923918_p_1};
	xsi_register_didat("work_a_0043899501_3889923918", "isim/CPU_2214_Test_isim_beh.exe.sim/work/a_0043899501_3889923918.didat");
	xsi_register_executes(pe);
}
