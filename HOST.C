/*  HOST.C
    By Mark R. Schmidt

    Source file for HLLAPPI calls with OS/2 communications manager.

    Writen	  06/13/1991
    Last Modified 06/17/1991
*/

#include <string.h>
#include "host.h"

int host( int funcnum, char *infostr )
{
    int errorcode = 0,
	infolen;

    infolen = strlen( infostr );
    hllapi( &funcnum, infostr, &infolen, &errorcode );
    return( errorcode );
}
