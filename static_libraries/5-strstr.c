#include "main.h"

/**
 * _strstr - Cfr Description
 * @haystack: Input pointer
 * @needle: Input pointer
 * Description: Function that locates a substring
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return (0);
}
