/*
 * BIOS interrupt 12h handler
 */

#include "miscemu.h"

/**********************************************************************
 *	    INT_Int12Handler
 *
 * Handler for int 12h (get memory size).
 */
void WINAPI INT_Int12Handler( CONTEXT86 *context )
{
    AX_reg(context) = 640;
}
