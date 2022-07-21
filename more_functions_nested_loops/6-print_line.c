#include "main.h"

/**
 * print_line - Cfr description
 * @n: input integer
 * Description: It draws a straight line in terminal
 * Return: ALways 0
 */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n == 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
