#include "main.h"

/**
 * print_most_numbers - Cfr Description
 * Description: Print all digit except 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	char i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
