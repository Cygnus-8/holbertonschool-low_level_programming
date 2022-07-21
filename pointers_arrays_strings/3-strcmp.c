#include "main.h"

/**
 * _strcmp - Cfr description
 *  @s1: Input string
 *  @s2: Input string
 *  Description: Function that compares two strings
 *  Return: The first value of s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
		{
			j = s1[i] - s2[i];
			break;
		}
	}
	return (j);
}
