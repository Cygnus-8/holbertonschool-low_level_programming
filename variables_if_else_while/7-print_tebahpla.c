#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	for ( ; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
