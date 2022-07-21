#include "3-calc.h"

/**
 * main - cfr description
 * @argc: argument count
 * @argv: argument vector char
 * description: main function
 * Return: 0 if executed normally, 98 on argc error, 99 on wrong operator
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
