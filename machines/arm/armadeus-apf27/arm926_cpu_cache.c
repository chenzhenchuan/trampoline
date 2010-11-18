/**
 * @file arm926_cpu_cache.c
 *
 * @section descr File description
 *
 * ARM926EJ-S CPU cache driver
 *
 * @section copyright Copyright
 *
 * Trampoline OS
 *
 * Trampoline is copyright (c) IRCCyN 2005+
 * Copyright ESEO for function and data structures documentation and ARM port
 * Trampoline is protected by the French intellectual property law.
 *
 * This software is distributed under the Lesser GNU Public Licence
 *
 * @section infos File informations
 *
 * $Date: $
 * $Rev: $
 * $Author: $
 * $URL: $
 */
#include "tpl_compiler.h"
#include "arm926_cpu_cache.h"

#if WITH_CPU_CACHE == NO
FUNC (void, OS_CODE) arm926_cache_off ()
{
	__asm__ ("MRC p15, 0, r0, c1, c0, 0 \n"
	         "BIC r0, r0, #0b1000000000000 \n"
	         "BIC r0, r0, #0b0000000000100 \n"
					 "MCR p15, 0, r0, c1, c0, 0");
}

#else /* WITH_CPU_CACHE == YES */

FUNC (void, OS_CODE) arm926_cache_on ()
{
	__asm__ ("MRC p15, 0, r0, c1, c0, 0 \n"
	         "ORR r0, r0, #0b1000000000000 \n"
	         "ORR r0, r0, #0b0000000000100 \n"
					 "MCR p15, 0, r0, c1, c0, 0")\n
}

FUNC (void, OS_CODE) arm926_cache_invalidate ()
{

}

#endif /* WITH_CPU_CACHE == YES */
