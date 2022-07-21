#include "main.h"

/**
 * print_numbers - Cfr description
 * Description: Prints the number, from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	char i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
