#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - cfr description
 * @b: input unsigned integer
 * description: function that allocates memory using malloc
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
