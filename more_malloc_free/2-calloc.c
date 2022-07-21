#include "main.h"
#include <stdlib.h>

/**
 * _calloc - cfr description
 * @nmemb: input unsigned int
 * @size: input unsigned int
 * description: Function that allocates memory for an array using malloc
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *sigma;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sigma = malloc(nmemb * size);
	if (sigma == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(sigma + i) = 0;

	return (sigma);
}
