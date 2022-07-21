#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Cfr description
 * @a: Input pointer on array
 * @size: Input integer of size of a pointer
 * description: Function that prints the sum of two diagonals of a square
 * matrix of integers
 */

void print_diagsums(int *a, int size)
{
	int i, max = size * size, sum1 = 0, sum2 = 0;

	for (i = 0; i < max; i += size + 1)
		sum1 += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
		sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
