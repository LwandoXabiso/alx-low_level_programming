#include "lists.h"

/**
 * free_listint - function that frees the list of ints
 * @head: pointer to the first node
 * Return: returns void
 */

void free_listint(listint_t *head)
{
	listint_t *element;

	while (head)
	{
		element = head;
		head = head->next;
		free(element);
	}
}
