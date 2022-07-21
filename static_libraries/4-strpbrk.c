#include "main.h"

/**
 * _strpbrk - Cfr Description
 * @s: Input string
 * @accept: Input string
 * Description: Function that searches a string for
 * any of a set of bytes
 * Return: A pointer to the bytes in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *result = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = result;
		s++;
	}
	return (0);
}
