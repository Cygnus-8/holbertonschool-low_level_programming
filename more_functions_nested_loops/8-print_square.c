#include "main.h"

/**
 * print_square - Cfr description
 * @size: input integer
 * Description: It prints a square in terminal
 * Return: ALways 0
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (b = 1; b <= size; b++)
		{
			for (a = 1; a <= size; a++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
