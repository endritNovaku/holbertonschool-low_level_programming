#include <stdio.h>

void print(void) __attribute__ ((constructor));

/**
 * print - print text
 */
void print(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("Ibore my house upon my back!\n");
}
