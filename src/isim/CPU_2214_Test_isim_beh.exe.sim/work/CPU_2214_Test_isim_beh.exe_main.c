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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *STD_TEXTIO;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    std_textio_init();
    work_a_2274648968_3212880686_init();
    work_a_1525071888_0318166943_init();
    work_a_3222946569_0000452272_init();
    work_a_1350853198_0000452272_init();
    work_a_2750190074_0000452272_init();
    work_a_2382863390_3212880686_init();
    work_a_2653443939_3212880686_init();
    work_a_3112044328_2372691052_init();
    work_a_3006959317_2372691052_init();
    work_a_2973221874_2372691052_init();
    work_a_3191950445_3212880686_init();
    work_a_0832606739_2372691052_init();
    work_a_3847848047_2372691052_init();
    work_a_1537559093_0318166943_init();
    work_a_1384273917_3212880686_init();
    work_a_1040776830_3212880686_init();
    work_a_0043899501_3889923918_init();


    xsi_register_tops("work_a_0043899501_3889923918");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");

    return xsi_run_simulation(argc, argv);

}
