#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#include "rtwtypes.h"
#include "PR02.h"
#include "PR02_private.h"

void config_ePWM_GPIO (void)
{
  EALLOW;
  ClkCfgRegs.PERCLKDIVSEL.bit.EPWMCLKDIV = 0U;

  /*-- Configure pin assignments for ePWM1 --*/
  GpioCtrlRegs.GPAGMUX1.bit.GPIO0 = 0U;
  GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 1U; /* Configure GPIOGPIO0 as EPWM1A*/
  GpioCtrlRegs.GPAGMUX1.bit.GPIO1 = 0U;
  GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 1U; /* Configure GPIOGPIO1 as EPWM1B*/

  /*-- Configure pin assignments for ePWM4 --*/
  GpioCtrlRegs.GPAGMUX1.bit.GPIO6 = 0U;
  GpioCtrlRegs.GPAMUX1.bit.GPIO6 = 1U; /* Configure GPIOGPIO6 as EPWM4A*/
  GpioCtrlRegs.GPAGMUX1.bit.GPIO7 = 0U;
  GpioCtrlRegs.GPAMUX1.bit.GPIO7 = 1U; /* Configure GPIOGPIO7 as EPWM4B*/

  /*-- Configure pin assignments for ePWM3 --*/
  GpioCtrlRegs.GPAGMUX1.bit.GPIO4 = 0U;
  GpioCtrlRegs.GPAMUX1.bit.GPIO4 = 1U; /* Configure GPIOGPIO4 as EPWM3A*/
  GpioCtrlRegs.GPAGMUX1.bit.GPIO5 = 0U;
  GpioCtrlRegs.GPAMUX1.bit.GPIO5 = 1U; /* Configure GPIOGPIO5 as EPWM3B*/
  EDIS;
}

void config_ePWM_TBSync (void)
{
  /* Enable TBCLK within the EPWM*/
  EALLOW;
  volatile Uint32 tempRead = 0;

  /* Enable TBCLK after the ePWM configurations */
  CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1U;
  EDIS;
}

void config_ePWMSyncSource (void)
{
  /* Configuring EXTSYNCOUT source selection */
  EALLOW;
  SyncSocRegs.SYNCSELECT.bit.SYNCOUT = 0U;

  /* Configuring ePWM Sync in source selection */
  SyncSocRegs.SYNCSELECT.bit.EPWM4SYNCIN = 0U;
  SyncSocRegs.SYNCSELECT.bit.EPWM7SYNCIN = 0U;
  SyncSocRegs.SYNCSELECT.bit.EPWM10SYNCIN = 0U;
  EDIS;
}
