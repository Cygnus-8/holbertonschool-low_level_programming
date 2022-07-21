#include "main.h"
/**
 * _strcat - Cfr Description
 * @dest: input string
 * @src: input string
 * Description: function that concatenates two strings
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, size = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		size++;

	for (j = 0; src[j] != '\0'; j++)
	{
		*(dest + size) = *(src + j);
		size++;
	}

	*(dest + size) = '\0';
	return (dest);
}
