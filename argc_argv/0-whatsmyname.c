#include <stdio.h>

/**
 * main - Cfr description
 * @argc: argument count input
 * @argv: argument vector input
 * description: a program that prints its name
 * followed by a new line
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
