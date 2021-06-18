#include "ad7606.h"

//int Udc[100];
float Udc[100],Uac[100],Io[100],IL[100];
float MeasureBuf[8] = {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };
volatile int temp[8] ;
int cnt = 0;

void AD7606_Init(void)
{
    EALLOW;
    // GPIO config for AD7606(not using XINTF)
    // If using XINTF, the gpio is initialized by InitXintf()

    GpioCtrlRegs.GPADIR.bit.GPIO6=1 ;
    GpioCtrlRegs.GPADIR.bit.GPIO7=1 ;
    GpioCtrlRegs.GPADIR.bit.GPIO8=0 ;// Set as output ;
    GpioCtrlRegs.GPADIR.bit.GPIO9=1 ;
    GpioCtrlRegs.GPADIR.bit.GPIO10=0 ;
    GpioCtrlRegs.GPADIR.bit.GPIO11=0 ; // Set as input ;

    GpioCtrlRegs.GPAMUX1.bit.GPIO6= 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO7= 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO8=0 ; // Common function ;
    GpioCtrlRegs.GPAMUX1.bit.GPIO9 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO10 = 0;
    GpioCtrlRegs.GPAMUX1.bit.GPIO11 = 0;

    EDIS;

    AD7606_SET_RANGE ;

    AD7606_CLR_RST ;
    AD7606_DELAY ;

    AD7606_SET_RST ;
    AD7606_DELAY ;

    AD7606_CLR_RST ;
    AD7606_DELAY ;
}

void AD7606_Start(void)
{
    Uint16 i = 0 , j = 1;
    AD7606_CLR_CONV_A ;
    asm(" RPT #9 || NOP");
    AD7606_SET_CONV_A;
    asm(" RPT #19 || NOP");
    while(AD7606_BUSY)
    {
        // Waiting for end of conversion
        i ++ ;
        // asm(" RPT #1 || NOP");
        if(i > 1000){
            j ++ ;
            return ;
        }
    }

}

// If use the XINTF bus to read the AD7606
void AD7606_XINTF_Read_All(void){
    AD7606_Start();
    // AD7606_CLR_CS ; in GPIO mode
    //asm(" RPT #50 || NOP");

//    for(i = 0; i < 8; i++){
//        temp[i] = * ( (Uint16 *) XINTF_AD7606) ;
//        // asm(" RPT #1 || NOP");
//        if                                                                                                                                ZCC\\
    \(AD7606_FIRST_DATA){
//            count = i ;
//        }
//    }
    temp[0] = * ( (Uint16 *) XINTF_AD7606) ;
//    if(AD7606_FIRST_DATA) count = i_ad7606 ++ ;
    temp[1] = * ( (Uint16 *) XINTF_AD7606) ;
//    if(AD7606_FIRST_DATA) count = i_ad7606 ++ ;
    temp[2] = * ( (Uint16 *) XINTF_AD7606) ;
//    if(AD7606_FIRST_DATA) count = i_ad7606 ++ ;
    temp[3] = * ( (Uint16 *) XINTF_AD7606) ;
//    if(AD7606_FIRST_DATA) count = i_ad7606 ++ ;
    // temp[4] = * ( (Uint16 *) XINTF_AD7606) ;
//    if(AD7606_FIRST_DATA) count = i_ad7606 ++ ;
    // temp[5] = * ( (Uint16 *) XINTF_AD7606) ;
//    if(AD7606_FIRST_DATA) count = i_ad7606 ++ ;
    // temp[6] = * ( (Uint16 *) XINTF_AD7606) ;
//    if(AD7606_FIRST_DATA) count = i_ad7606 ++ ;
    // temp[7] = * ( (Uint16 *) XINTF_AD7606) ;
//    if(AD7606_FIRST_DATA) count = i_ad7606 ++ ;

//    for(i = 0 ; i < 4; i ++ ){
//        j = (count + i ) % 8 ;
//        Result_Buf[i] = temp[j] * AD7606_REF_RESOLUTION ;
//    }
    // DC Voltage and Capacitor Current should be calculated first
   // MeasureBuf[0] = (float)temp[0]*0.01647949 ;
    MeasureBuf[0] = (float)temp[0]*(-0.0164704)-1.360;
    MeasureBuf[1] = (float)temp[1]*(-0.0164704)+0.481;
    MeasureBuf[2] = (float)temp[2]*(-0.0009537)+0.038;
    MeasureBuf[3] = (float)temp[3]*(-0.0019073)-0.055;

    //MeasureBuf[0] = (float)temp[0];
    //MeasureBuf[1] = (float)temp[1];
    //MeasureBuf[2] = (float)temp[2];
    //MeasureBuf[3] = (float)temp[3];

  //  Udc[cnt] = temp[0];
   Udc[cnt] = MeasureBuf[0];
   Uac[cnt] = MeasureBuf[1];
   Io[cnt] = MeasureBuf[2];
   IL[cnt] = MeasureBuf[3];
    cnt++;
    if(cnt == 100)
    {
        cnt = 0;
    }
    //SCOPE_PD ;
}

