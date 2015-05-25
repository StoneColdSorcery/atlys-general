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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001031682032_3505899711_init();
    work_m_00000000002797559486_2443054173_init();
    work_m_00000000003444259728_3463566256_init();
    work_m_00000000003444259728_2037507635_init();
    work_m_00000000001263779525_2883180470_init();
    work_m_00000000003864031223_1113649744_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003864031223_1113649744");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
