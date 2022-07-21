#include "main.h"

/**
 * cap_string - Cfr description
 * @s: Input string
 * Description: Capitalizes all words of a string
 * Return: The string result
 */

char *cap_string(char *s)
{
	int i, P = 32, k;
	char n[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= P;
		}
		P = 0;
		for (k = 0; k < 13; k++)
		{
			if (s[i] == n[k])
			{
				P = 32;
				k = 13;
			}
		}
	}
	return (s);
}
