#include "main.h"

/**
 * leet - Cfr Description
 * @s: input string
 * Description: Encodes a string into 1337
 * Return: The string of result
 */

char *leet(char *s)
{
	int i, j;
	char str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},
		 subs[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str[j])
				s[i] = subs[j];
		}
	}
	return (s);
}
