#include "lists.h"

/**
 * reverse_listint - function to reverse an int list
 * @head: the address of the pointer to the first node
 * Return: the address of the head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *element = NULL, *follow = NULL;

	if (!head || !*head)
		return (NULL);

	element = *head;
	*head = NULL;
	while (element)
	{
		follow = element->next;
		element->next = *head;
		*head = element;
		element = follow;
	}
	return (*head);
}
