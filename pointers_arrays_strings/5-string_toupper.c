#include "main.h"

/**
 * string_toupper - Cfr description
 * @s: Input String
 * Description: Changes all lowercase letters
 * of a string to uppercase
 * Return: a string contening the result
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			s[i] -= 32;
	}
	return (s);
}
