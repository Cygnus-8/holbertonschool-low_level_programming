#include "main.h"
/**
 * _strncat - Cfr Description
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Description: function that concatenates two strings
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, size = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		size++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		*(dest + size + j) = *(src + j);
	}

	*(dest + size + j) = '\0';
	return (dest);
}
