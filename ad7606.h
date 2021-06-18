#ifndef AD7606_H
#define AD7606_H

#include "./include/DSP2833x_Device.h"
#include "./include/DSP2833x_Examples.h"

#define   AD7606_SET_RANGE      GpioDataRegs.GPASET.bit.GPIO6=1
#define   AD7606_CLR_RANGE      GpioDataRegs.GPACLEAR.bit.GPIO6=1
#define   AD7606_CLR_RST        GpioDataRegs.GPACLEAR.bit.GPIO9=1
#define   AD7606_SET_RST        GpioDataRegs.GPASET.bit.GPIO9=1

#define   AD7606_SET_CONV_A     GpioDataRegs.GPASET.bit.GPIO7=1
#define   AD7606_CLR_CONV_A     GpioDataRegs.GPACLEAR.bit.GPIO7=1
#define   AD7606_SET_CONV_B     GpioDataRegs.GPASET.bit.GPIO8=1
#define   AD7606_CLR_CONV_B     GpioDataRegs.GPACLEAR.bit.GPIO8=1

//#define   AD7606_SET_RD         GpioDataRegs.GPASET.bit.GPIO10=1
//#define   AD7606_CLR_RD         GpioDataRegs.GPACLEAR.bit.GPIO10=1

#define   AD7606_BUSY           GpioDataRegs.GPADAT.bit.GPIO10
#define   AD7606_FIRST_DATA     GpioDataRegs.GPADAT.bit.GPIO11

#define   AD7606_DELAY            asm(" RPT #7 || NOP"); // Specific delay time is about?

extern volatile float Result_Buf[8] ;
extern float MeasureBuf[8];
extern float Udc[100],Uac[100],Io[100],IL[100];
//extern int Udc[100];
void AD7606_Init(void) ;
void AD7606_Start(void) ;

#define XINTF_ZONE_0 0x004000 // zone 0
#define XINTF_ZONE_6 0x100000 // zone 6
#define XINTF_ZONE_7 0x200000 // zone 7

#define XINTF_AD7606 (XINTF_ZONE_0+1)

// If use the XINTF bus to read the AD7606
void AD7606_XINTF_Read_All(void);
// float AD7606_Read(int * channel) ;
void AD7606_PostSampleDo(void);
#endif
