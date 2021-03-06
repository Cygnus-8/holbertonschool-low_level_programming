#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
int int_index(int *array, int size, int (*cmp)(int));
#include <stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
#endif /* FUNCTION_POINTERS_H */
