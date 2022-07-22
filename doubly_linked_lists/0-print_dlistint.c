#include "lists.h"

/**
 * print_dlistint - cfr description
 * @h: head of the list
 * Description: Print all elements of a list
 * Return: The number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
