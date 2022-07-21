#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Cfr description
 * @name: input char
 * @f: function pointer to char
 * description: Function that prints a name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
