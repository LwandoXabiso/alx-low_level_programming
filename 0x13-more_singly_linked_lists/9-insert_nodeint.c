#include "lists.h"

/**
 * insert_nodeint_at_index - inserts the new node at a given index
 * @head: the address of pointer to the first node
 * @idx: index to insert a new node
 * @n: n value of new node
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *element, *new_element = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!head || !new_element)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (!idx)
	{
		new_element->next = *head;
		*head = new_element;
		return (new_element);
	}
	element = *head;
	while (element)
	{
		if (x == idx - 1)
		{
			new_element->next = element->next;
			element->next = new_element;
			return (new_element);
		}
		x++;
		element = element->next;
	}
	free(new_element);
	return (NULL);
}
