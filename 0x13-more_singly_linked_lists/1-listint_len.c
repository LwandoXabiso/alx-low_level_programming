#include "lists.h"

/**
 * listint_len - print a linked lists
 * @h: pointer function to the first node
 * Return: The size ogf the list
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
