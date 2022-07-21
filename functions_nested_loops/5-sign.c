#include "main.h"

/**
 * print_sign - Cfr description
 * @n: input number
 * Description: checks for number sign
 * Return: 1 if > than 0, 0 if equal to 0 and -1 if < than 0
 */

int print_sign(int n)
{
	int b = 0;

	if (n > 0)
	{
		b = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		b = 0;
		_putchar('0');
	}
	else
	{
		b = -1;
		_putchar('-');
	}
	return (b);
}

