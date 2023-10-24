#include "lists.h"

/**
 * add_nodeint - function that adds a node to the top
 * @head: pointer function to the first node
 * @n: value for a new node
 * Return: returns a ointer to a new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element = malloc(sizeof(listint_t));

	if (!head || !new_element)
		return (NULL);

	new_element->next = NULL;
	new_element->n = n;

	if (*head)
		new_element->next = *head;
	*head = new_element;
	return (new_element);
}
