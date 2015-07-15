/*******************************************************************************/
/**
\file       dummy.c
\brief      Dummy Functions
\author     Francisco Martinez
\version    1.0
\date       04/04/2014
*/
/****************************************************************************************************/

/*****************************************************************************************************
* Include files
*****************************************************************************************************/

/** Core modules */
/** Variable types and common definitions */
#include "typedefs.h"

/** Own headers */
#include "dummy.h"

/* GPIO routines prototypes */ 
#include "GPIO.h"

/** Used modules */
TASKSTRUCT *rps_TaskPtr;

/*****************************************************************************************************
* Definition of module wide VARIABLEs 
*****************************************************************************************************/

/*****************************************************************************************************
* Declaration of module wide FUNCTIONs 
*****************************************************************************************************/

/*****************************************************************************************************
* Definition of module wide MACROs / #DEFINE-CONSTANTs 
*****************************************************************************************************/

/*****************************************************************************************************
* Declaration of module wide TYPEs 
*****************************************************************************************************/

/*****************************************************************************************************
* Definition of module wide (CONST-) CONSTANTs 
*****************************************************************************************************/

/*****************************************************************************************************
* Code of module wide FUNCTIONS
*****************************************************************************************************/


/****************************************************************************************************/
/**
* \brief    Turn a combination of 4 LEDs with a unique blinking pattern, this funcation shall be 
* \brief    called periodically to operate. 
* \author   Francisco Martinez
* \return   void
*/

void Test(void)
{
    static T_UWORD rub_U16Counter = 0;
    
    rub_U16Counter++;
    
    if (rub_U16Counter == 1000)
    {
    	LED_TOGGLE(LED1);
    	rub_U16Counter = 0;	
    }

}


void Task_5ms(void)
{   
	/*static T_UBYTE contador = 0;
	contador++;
	if( contador == 100 )
	{
		LED_TOGGLE(LED1);
		contador = 0;	
	}*/
}

void Task_10ms(void)
{   
   //LED_TOGGLE(LED2);
}

void Task_50ms(void)
{   
    LED_TOGGLE(LED3);
}

void Task_100ms(void)
{   
    LED_TOGGLE(LED4);
}


TASKSTRUCT function_table_def[]={
	{ 0, 10,   &Task_5ms   },
	{ 0, 20,   &Task_10ms  },
	{ 0, 100,  &Task_50ms  },
	{ 0, 200,  &Task_100ms },
};


void dummy_500us(void)//Ostick
{
	int i=0;
	for(i = 0; i < 4; i++)
	{
		(rps_TaskPtr+i)->ruw_Counter++;
		if( (rps_TaskPtr+i)->ruw_Counter == (rps_TaskPtr+i)->ruw_TopCount   )
		{
			(rps_TaskPtr+i)->cpfu_PerFunct();
			(rps_TaskPtr+i)->ruw_Counter = 0;
		}
	}
}




void dummy_endless_loop(void)//BackRound
{
	rps_TaskPtr = function_table_def;
	for(;;)
	{
	
	}
	
}