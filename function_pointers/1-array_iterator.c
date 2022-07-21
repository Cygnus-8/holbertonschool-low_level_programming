#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - cfr description
 * @array : input array
 * @size : input size of array
 * @action: a pointer to a function
 * Description: Function that executes a function given as a parameter on
 * each element of an array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
