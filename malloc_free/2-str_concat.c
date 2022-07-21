#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Cfr description
 * @s1: Input char string
 * @s2: Input char string
 * Description: Function that concatenates two strings
 * Return: a pointer to a newly string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, k, i;
	char *P;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	k = len1 + len2;
	P = malloc(sizeof(char) * (len1 + len2 + 1));

	if (P == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		if (i < len1)
		{
			P[i] = *s1;
			s1++;
		}
		else
		{
			P[i] = *s2;
			s2++;
		}
	}
	P[i] = '\0';
	return (P);
}
