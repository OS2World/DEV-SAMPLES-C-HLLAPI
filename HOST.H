/*  HOST.H
    By Mark R. Schmidt

    Header file for implementing HLLAPI calls in MS C for OS/2.

    Written	  06/05/1991
    Last Modified 06/17/1991

    HOST.H, HOST.OBJ and HOST.DEF provide the following routine and
    constants:
*/

#define HostConnect	1   /* Connect to presentation space	    */
#define HostDisconnect	2   /* Disconnect from presentation space   */
#define SendKeyToHost	3   /* Send keystrokes to host		    */
#define WaitForHost	4   /* Wait for X to go off		    */
#define SearchHost	6   /* Search presentation space for string */
#define SetHostSession	9   /* Set session parameters		    */

#define SendFile	90  /* Send file to host		    */
#define ReceiveFile	91  /* Get file from host		    */


int host( int funcnum, char *infostr );

/*  This is and easy function that can be used to preform host task
    that only need the function number (funcnum) and a data string
    (infostr).	The function returns the HLLAPI error code.
*/


extern void far pascal hllapi( int far *funcnum, char far *infostr,
			       int far *infolen, int far *errorcode );

/*  This is the hard way to call HLLAPI where funcnum and infostr are
    as above and infolen is the length of the infostr and errorcode will
    return will the error.  Some uncommon functions need the errorcode to
    be set before the function is called.  These would require the use of
    this function.  The function returns void but errorcode is set to the
    HLLAPI error code.
*/
