#include "function_pointers.h"

/**
 * int_index - cfr description
 * @array: input array of integer
 * @size: input size of array
 * @cmp: pointer to function
 * description: function that searches for an integer
 * Return: the index of the first element for which the cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
