#include "main.h"

/**
 * _memset - cfr description
 * @s: input char pointer
 * @b: input char
 * @n: unsigned int input
 * Description: Function that fills memory with a constant byte
 * Return: A string contening the result
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (str);
}
