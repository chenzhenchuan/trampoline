/**
 * @file MemMap.h
 *
 * @section desc File description
 *
 * Memory Mapping of Application $APPNAME$
 * Automatically generated by goil on $TIMESTAMP$
 *
 * @section copyright Copyright
 *
 * Trampoline OS
 *
 * Trampoline is copyright (c) IRCCyN 2005-2007
 * Trampoline is protected by the French intellectual property law.
 *
 * This software is distributed under the Lesser GNU Public Licence
 *
 * @section infos File informations
 *
 * $Date$
 * $Rev$
 * $Author$
 * $URL$
 */

#define MEMMAP_ERROR

/******************************************************************************/
/* OS                                                                        	*/
/******************************************************************************/
$OS_MEMMAP$

/******************************************************************************/
/* API                                                                        	*/
/******************************************************************************/
$API_MEMMAP$

/******************************************************************************/
/* APP                                                                       	*/
/******************************************************************************/
$APP_MEMMAP$

#ifdef MEMMAP_ERROR
	#error "MemMap.h, wrong section command"
#endif

/******************************************************************************/
/* PUBLISHED INFORMATION                                                   	  */
/******************************************************************************/
#define MEMMAP_VENDOR_ID        48
#define MEMMAP_AR_MAJOR_VERSION 3
#define MEMMAP_AR_MINOR_VERSION 0
#define MEMMAP_AR_PATCH_VERSION 0
#define MEMMAP_SW_MAJOR_VERSION 1
#define MEMMAP_SW_MINOR_VERSION 0
#define MEMMAP_SW_PATCH_VERSION 0

