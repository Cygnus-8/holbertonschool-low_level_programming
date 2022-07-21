#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - cfr description
 * @str: input string
 * Description: Function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * Return: NULL if str=NULL or a pointer to the duplicated string on success
 */

char *_strdup(char *str)
{
	int len, i;
	char *new_str;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	new_str = malloc(sizeof(char) * len);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
