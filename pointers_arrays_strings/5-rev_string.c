#include "main.h"
#include<stdio.h>

/**
 * rev_string - Reverses a string
 * @s: modified
 **/
void rev_string(char *s)
{
	int a = 0, b = 0;
	char str[500];

	while (*(s + a))
	{
		*(str + a) = *(s + a);
		a++;
	}
	a = a - 1;
	while (a >= 0)
	{
		*(s + a) = *(str + b);
		b++;
		a--;
	}
}
