/*
 * k_os (Konnex Operating-System based on the OSEK/VDX-Standard).
 *
 * (C) 2007-2012 by Christoph Schueler <github.com/Christoph2,
 *                                      cpu12.gems@googlemail.com>
 *
 * All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * s. FLOSS-EXCEPTION.txt
 */

#if !defined(__EA_CFG_H)
#define __EA_CFG_H

#include "MemIf_Types.h"
#include "Eep.h"

#define EA_DEV_ERROR_DETECT	    STD_ON

#define EA_NVM_JOB_END_NOTIFICATION STD_ON
#define EA_POLLING_MODE		    STD_ON
#define EA_SET_MODE_SUPPORTED	    STD_ON
#define EA_VIRTUAL_PAGE_SIZE	    ((uint8)8)


/* TODO: Published Information!!! */
//#define EA_BLOCK_OVERHEAD	    ???
//#define EA_MAXIMUM_BLOCKING_TIME  ???
//#define EA_PAGE_OVERHEAD	    ???

#endif  /* __EA_CFG_H  */

