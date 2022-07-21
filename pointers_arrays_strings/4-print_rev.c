#include "main.h"

/**
 * print_rev - cfr description
 * @s: input an char pointer
 * Description: A function that prints a string in reverse followed
 * by a new line to stdout
 */

void print_rev(char *s)
{
	int a, b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		b++;
		a++;
	}
	b--;
	for (; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
