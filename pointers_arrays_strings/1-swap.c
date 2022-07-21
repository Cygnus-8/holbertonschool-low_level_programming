#include "main.h"

/**
 * swap_int - cfr description
 * @a: input an integer pointer
 * @b: input an integer pointer
 * Description: A function that swap the values of two integers
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
