#include "main.h"
/**
 * swap_int - swap the values of params
 * @a: type a int
 * @b: type a int
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
