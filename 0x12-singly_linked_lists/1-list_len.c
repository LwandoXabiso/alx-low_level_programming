#include "lists.h"

/**
 * list_len - get the length of a list
 * @h: pointer to the const list_t head
 * Return: the length of the node
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
