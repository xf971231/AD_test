/** Inverter main program
 *  From Lab209 Prof. YongQiang Ye
 *  by Donghao@NUAA
 *  2017.12.15
 */
#include "DSP2833x_Device.h"     // DSP2833x 头文件
#include "DSP2833x_Examples.h"   // DSP2833x 例子相关头文件
#include "ad7606.h"
#include "dac8554.h"

#define RELAY_1_OPEN {GpioDataRegs.GPBSET.bit.GPIO32=1;}
#define RELAY_2_OPEN {GpioDataRegs.GPBSET.bit.GPIO33=1;}

#define SCOPE_TOGGLE   {GpioDataRegs.GPBTOGGLE.bit.GPIO61=1;}
#define SCOPE_PU    {GpioDataRegs.GPBSET.bit.GPIO61=1;}
#define SCOPE_PD    {GpioDataRegs.GPBCLEAR.bit.GPIO61=1;}

#define RELAY_1_CLOSEUP {GpioDataRegs.GPBCLEAR.bit.GPIO32=1;}
#define RELAY_2_CLOSEUP {GpioDataRegs.GPBCLEAR.bit.GPIO33=1;}

float tempAD[100];

#if 1
#define   LED1  GpioDataRegs.GPADAT.bit.GPIO16  //宏定义GPA组的GPIO0为LED1
#define   RANGE  GpioDataRegs.GPADAT.bit.GPIO6  //宏定义GPA组的GPIO0为LED1
#define   CONVST_A  GpioDataRegs.GPADAT.bit.GPIO7  //宏定义GPA组的GPIO0为LED1
#define   CONVST_B  GpioDataRegs.GPADAT.bit.GPIO8  //宏定义GPA组的GPIO0为LED1
#define   RESET  GpioDataRegs.GPADAT.bit.GPIO9  //宏定义GPA组的GPIO0为LED1
#define   BUSY  GpioDataRegs.GPADAT.bit.GPIO10  //宏定义GPA组的GPIO0为LED1
#define   FRSTDATA  GpioDataRegs.GPADAT.bit.GPIO11  //宏定义GPA组的GPIO0为LED1


void configtestled(void);
/***********************************************************************************************************************
                                                         * main
 **********************************************************************************************************************/
int main(void)
{
/***************************************************************************************************
                                    * System Initialization
 **************************************************************************************************/
    int i;

    InitSysCtrl();
    DINT;
    InitPieCtrl();
    IER = 0x0000;
    IFR = 0x0000;
    InitPieVectTable();

    AD7606_Init();
    InitXintf();

    DAC8554Init();
    configtestled();
    RELAY_1_OPEN;
    RELAY_2_OPEN;
    while(1)
    {
        SCOPE_PU;
        asm(" RPT #100 || NOP");
        SCOPE_PD;
        asm(" RPT #100 || NOP");
        //AD7606_XINTF_Read_All();
        //StoreVoltage(0, 3.0 , ADDR_DAC8554, 1);
        //StoreVoltage(1, 2.0 , ADDR_DAC8554, 1);
   }
}


void configtestled(void)  //GPIO初始化函数
{
   EALLOW;
   GpioCtrlRegs.GPAMUX2.bit.GPIO16 = 0; // GPIO0复用为GPIO功能
   GpioCtrlRegs.GPADIR.bit.GPIO16 = 1;  // GPIO0设置为输出
//   GpioCtrlRegs.GPBMUX2.bit.GPIO49 = 0; // GPIO0复用为GPIO功能
//   GpioCtrlRegs.GPBDIR.bit.GPIO49 = 1;  // GPIO0设置为输出
   GpioCtrlRegs.GPBDIR.bit.GPIO32 = 1 ; // Output
   GpioCtrlRegs.GPBDIR.bit.GPIO33 = 1 ; // Output

   GpioCtrlRegs.GPBMUX1.bit.GPIO32 = 0 ; // Common function
   GpioCtrlRegs.GPBMUX1.bit.GPIO33 = 0 ; // Common function

   GpioCtrlRegs.GPBDIR.bit.GPIO61 = 1 ; //
   GpioCtrlRegs.GPBMUX2.bit.GPIO61 = 0 ; // GPIO61作为Scope Trigger位使用
   EDIS;
}

#endif

//===========================================================================
// No more.
//===========================================================================
