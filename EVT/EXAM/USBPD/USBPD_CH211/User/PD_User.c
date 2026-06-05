/********************************** (C) COPYRIGHT *******************************
* File Name          : PD_User.C
* Author             : WCH
* Version            : V1.0.1
* Date               : 2025/10/27
* Description        : 
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
********************************************************************************/

#include <stdio.h>
#include <string.h>
#include "debug.h"
#include "PD_User.H"


//u32 SrcCap[] =  {0x3E21912C,};	//5V3A
u32 SrcCap[] = 	{0x3A21912C,};	//5V3A
u8 SrcCapCnt = 1;
//u32 SinkCap[] = {0x2E01912C,};	//5V3A
u32 SinkCap[] = {0x2A01912C,};	//5V3A
u8 SinkCapCnt = 1;



u8 FlagCharging;
u16 ChargingReadCnt;

/*********************************************************************
 * @fn      PD_User_Snk_DevIn
 *
 * @brief   The device is connected as a sink.
 *
 * @return  none
 */
void PD_User_Snk_DevIn(void)
{
//	printf("User Attached.Sink\r\n");
//
//	PWR_Charge_Enable();

	GPIO_SetBits(GPIOA, LED_B );		//Blue LED
	GPIO_ResetBits(GPIOA, LED_G );		//Green LED
}

/*********************************************************************
 * @fn      PD_User_Snk_Rx_SrcCap
 *
 * @brief   The device receives the Source_Capabilities message as a sink.
 *
 * @return  none
 */
void PD_User_Snk_Rx_SrcCap(void)
{
//	printf("User Rx SrcCap\r\n");
//	PWR_Charge_Set_Param(10);		//500mA
//	FlagCharging = 0;
}

/*********************************************************************
 * @fn      PD_User_Snk_Rx_PS_RDY
 *
 * @brief   The device receives the PS_RDY message as a sink.
 *
 * @return  none
 */
void PD_User_Snk_Rx_PS_RDY(void)
{

//	printf("User Rx PS_RDY\r\n");
//	PWR_Charge_Set_Param( PD_PHY.savedRequest.Current/5 );
//	FlagCharging = 1;
}

/*********************************************************************
 * @fn      PD_User_Src_DevIn
 *
 * @brief   The device is connected as a source.
 *
 * @return  none
 */
void PD_User_Src_DevIn(void)
{
//	printf("User Attached.Src\r\n");
//
//	PWR_Output_Enable();
//
//	GPIO_SetBits(GPIOA, LED_B );		//Blue LED
//	GPIO_ResetBits(GPIOA, LED_R );		//Red LED
}

/*********************************************************************
 * @fn      PD_User_Src_VoltChange
 *
 * @brief   The device is used as a source for voltage regulation.
 *
 * @return  none
 */
void PD_User_Src_VoltChange(void)
{

//#if	( !DEF_EN_VOLTCHANGE )
//	pProt_TX_PS_RDY();	
//#else
//
//	st_SrcCap_Fixed *tSrcCap = (st_SrcCap_Fixed *)&SrcCap[PD_PHY.savedRequest.ObjectPos-1];
//
//
//	if ( PD_PHY.tSrcTransition ) {
//		PD_PHY.tSrcTransition--;
//		if ( !PD_PHY.tSrcTransition ) {
//			PWR_Output_Set_Param( tSrcCap->Voltage*2.5+8 , tSrcCap->MaxCurrent/5*1.2 );
//		}
//	}
//	else if ( PD_PHY.tPSTransition ) {
//		u16 dat;
//		PD_PHY.tPSTransition--;
//		PWR_Read_Param(0x2C,&dat,1);
//		printf("%d",dat*20);
//		if ( ( (dat > (tSrcCap->Voltage*2.5*0.95) ) && (dat < (tSrcCap->Voltage*2.5*1.05) ) ) || !PD_PHY.tPSTransition ) {
//			pProt_TX_PS_RDY();
//		}
//	}
//#endif
}

/*********************************************************************
 * @fn      PD_User_DevOut
 *
 * @brief   Device detection removal.
 *
 * @return  none
 */
void PD_User_DevOut(void)
{

}

/*********************************************************************
 * @fn      PD_User_Timer
 *
 * @brief   
 *
 * @return  none
 */
void PD_User_Timer(void)
{

}
















