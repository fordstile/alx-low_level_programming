#include <stdio.h>
void first(void) __attribute__ ((constructor));
/**
 * first - we have to print a sentence before the main
 * function is executed with no dout.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
