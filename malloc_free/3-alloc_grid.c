#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - cfr description
 * @width: input integer
 * @height: Input integer
 * description: Function that returns a pointer to a 2 dimensional
 * of integers
 * Return: a pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **P;
	int i, j;

	if (width <= 0 || height <=	0)
		return (NULL);

	P = malloc(sizeof(*P) * height);
	if (P == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		P[i] = malloc(sizeof(int) * width);
		if (P[i] == NULL)
		{
			while (i >= 0)
			{
				free(P[i]);
				i--;
			}
			free(P);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			P[i][j] = 0;
		}
		j = 0;
	}
	return (P);
}
