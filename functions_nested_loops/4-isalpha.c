#include "main.h"

/**
 * _isalpha - Cfr description
 * @c: input character
 * Description: checks for lower case and upper case character
 * Return: 1 and 0 otherwise
 */

int _isalpha(int c)
{
	char lower, upper;
	int b = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == upper || c == lower)
				b = 1;
		}
	}
	return (b);
}

