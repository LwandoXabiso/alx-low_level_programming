#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: A pointer function to the head of the list_t list
 * Return: The number of Nodes in the list_t list
 */

size_t printint(const listint_t *h)
{
	size_t element;
	element = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		element++;
	}

	return (element);
}
