#include "lists.h"

/**
 * dlistint_len - cfr description
 * @h: head of the list 
 * Return: The number of element in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
