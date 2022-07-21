#include "main.h"

/**
 * times_table - Cfr description
 * Description: Print the 9 times table starting 0
 * Return: 0
 */

void times_table(void)
{
	int i, h, k;

	for (i = 0; i <= 9; i++)
	{
		for (h = 0; h <= 9; h++)
		{
			k = i * h;
			if (k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if (h != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (h == 0)
				{
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
					continue;
				}
				else
				{
					_putchar(' ');				
					_putchar(k + '0');
				if (h != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				}
			}
		}
		h = 0;
		_putchar('\n');
	}
}
