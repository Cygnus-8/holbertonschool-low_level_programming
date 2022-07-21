#include "main.h"

/**
 * _memcpy - Cfr description
 * @dest: Input string
 * @src: Input string
 * @n: Unsigned int input
 * Description: Function that copies memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *str = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (str);

}
