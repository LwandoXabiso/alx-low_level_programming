#include "lists.h"

/**
 * add_nodeint_end - function to add a node to the bottom
 * @head: the pointer function to the first node
 * @n: valueto the new node
 * Return: returns apoiter to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *element = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !element)
		return (NULL);

	element->next = NULL;
	element->n = n;

	if (!*head)
		*head = element;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = element;
	}
	return (element);
}

