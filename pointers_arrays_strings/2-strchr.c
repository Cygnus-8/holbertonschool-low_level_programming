#include "main.h"

/**
 * _strchr - Cfr description
 * @s: Input pointer
 * @c: input char
 * Description: Functions that locates a character in a string
 * Return: a pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	int i = 1;

	while (s[i] - 1)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
