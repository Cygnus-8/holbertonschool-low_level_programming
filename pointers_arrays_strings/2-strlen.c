#include "main.h"

/**
 * _strlen - cfr description
 * @s: input an char pointer
 * Description: A function that returns the length of a string
 * Return: The length of a string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}
