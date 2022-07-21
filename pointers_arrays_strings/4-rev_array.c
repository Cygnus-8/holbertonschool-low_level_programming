#include "main.h"

/**
 * reverse_array - Cfr description
 * @a: Input array
 * @n: Input integer
 * Description: Function that reverses the content of an array of integers
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}

}
