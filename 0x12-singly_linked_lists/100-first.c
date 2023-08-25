#include <stdio.h>

/**
 * alx_nkqubela - making alx_nkqubela() 2 b executed before main()
 */

void alx_nkqubela(void) __attribute__ ((constructor));

/**
 * alx_nkqubela - calling alx_nkqubela
 */

void alx_nkqubela(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
