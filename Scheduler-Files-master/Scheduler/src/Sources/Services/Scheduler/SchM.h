/*============================================================================*/
/*                        SV C BC SOFTWARE GROUP                              */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:        %SchM.h%
* Instance:         RPL_1
* %version:         1 %
* %created_by:      Mario Alberto Rivera González %
* %date_created:    Fri Feb 28 13:41:01 2003 %
*=============================================================================*/
/* DESCRIPTION : Header file template                                         */
/*============================================================================*/
/* FUNCTION COMMENT : contains only symbols which are exported to internal    */
/* platform modules. This will not be delivered with the library              */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | DD/MM/YYYY  | SAR/SIF/SCN_xxx               | Mr. Template     */
/* Integration under Continuus CM                                             */
/*============================================================================*/
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.2      | DD/MM/YYYY  | SAR/SIF/SCN_xxx               | EDDY             */
/* Integration under Continuus CM                                             */
/*============================================================================*/

#ifndef SCHM_H                               /* To avoid double inclusion */
#define SCHM_H

/* Includes */
/* -------- */
#include "SchM_types.h"


/* Exported types and constants */
/* ---------------------------- */

/* Types definition */
/* typedef */


/*==================================================*/ 
/* Declaration of exported constants                */
/*==================================================*/ 
/* BYTE constants */


/* WORD constants */


/* LONG and STRUCTURE constants */



/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 
/* BYTES */


/* WORDS */


/* LONGS and STRUCTURES */


/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 

/* Exported functions prototypes and macros */
/* ---------------------------------------- */

/* Functions prototypes */
extern void SchM_Init( const SchConfigType *SchM_Config );
extern void SchM_Stop( void );
extern void SchM_Start( void );
extern void SchM_OsTick( void );
extern void SchM_Background( void );

/* Functions macros */


/* Exported defines */



#endif


