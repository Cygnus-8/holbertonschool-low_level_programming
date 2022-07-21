#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a', P, K;

	K = 'q';
	P = 'e';

	for ( ; c <= 'z'; c++)
	{
		if ((c != K) && (c != P))
			putchar(c);
	}
	putchar('\n');
	return (0);
}
