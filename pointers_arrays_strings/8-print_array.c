#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n elements in the array a
 *@a: array to print
 *@n: number of elements to print
 **/

void print_array(int *a, int n)
{
	int k = 0;

	while (k < n)
	{
		printf("%d", a[k]);
		if (k < (n - 1))
			printf(", ");
		k++;
	}
	printf("\n");
}
