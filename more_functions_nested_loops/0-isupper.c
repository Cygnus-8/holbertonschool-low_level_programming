#include "main.h"

/**
 * _isupper - Uppercase character
 * @c : int c
 * Description: Checks for uppercase character
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	int a = 0;
	int b = 65;

	for (; b <= 90; b++)
	{
		if (c == b)
		{
			a = 1;
			break;
		}
	}
	return (a);
}
