#include "main.h"

/**
 * _strncpy - Cfr description
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Description: functions that copies a string
 * Return: dest string result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
