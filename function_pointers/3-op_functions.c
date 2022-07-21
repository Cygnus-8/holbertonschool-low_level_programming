#include "3-calc.h"

/**
 * op_add - cfr description
 * @a: input integer
 * @b: input integer
 * description : Returns the sum of a and b
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - cfr description
 * @a: input integer
 * @b: input integer
 * description : Returns the difference of a and b
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - cfr description
 * @a: input integer
 * @b: input integer
 * description: Returns the product of a and b
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - cfr description
 * @a: input integer
 * @b: input integer
 * description: Returns the result of the division of a and b
 * Return: the result of the division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - cfr description
 * @a: input integer
 * @b: input integer
 * description: Returns the remainder of the division of a and b
 * Return: the remainder of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
