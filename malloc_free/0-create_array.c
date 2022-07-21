#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - cfr description
 * @size: input unsigned int
 * @c: input char
 * Description: create an array of chars and initializes it
 * with a specific char
 * Return: a pointer to the array or Null if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(*p) * size);

	if (p == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
