#include "main.h"

/**
 * _isdigit - Cfr description
 * @c: integer input
 * Description: Checks for a digit 0 through 9
 * Return: 1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	int a = 48;
	int b = 0;

	for (; a <= 57; a++)
	{
		if (c == a)
		{
			b = 1;
			break;
		}
	}
	return (b);
}
