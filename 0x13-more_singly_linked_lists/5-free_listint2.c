#include "lists.h"

/**
 * free_listint2 - function that frees a list of ints
 * @head: The address of the pointer to the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *element, *x;

	if (!head)
		return;

	element = *head;
	while (element)
	{
		x = element;
		element = element->next;
		free(x);
	}
	*head = NULL;
}
