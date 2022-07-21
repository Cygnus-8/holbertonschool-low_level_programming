#include "main.h"

/**
 * puts2 - Cfr Description
 * @str: input pointer
 * Description: Prints every other character of a string starting
 * with the first character
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;
	len--;

	for (; i <= len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
