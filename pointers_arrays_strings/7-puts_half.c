#include "main.h"

/**
 * puts_half - Cfr Description
 * @str: input pointer
 * Description: Prints the second half part of string
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (*(str + len))
		len++;
	i = len / 2;
	if (len % 2)
		i += 1;
	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
