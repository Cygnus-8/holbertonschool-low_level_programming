#include "main.h"

/**
 * _puts - cfr description
 * @str: input an char pointer
 * Description: A function that prints a string followed
 * by a new line to stdout
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
