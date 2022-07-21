#include "main.h"

/**
 * _strspn - Cfr description
 *@s: source string
 *@accept: prefix substring
 * Description: Function that gets the length of a prefix substring
 *Return: number of bytes in the init segment
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, d = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				d++;
			}

			b++;
		}

		a++;
	}

	return (d);
}
