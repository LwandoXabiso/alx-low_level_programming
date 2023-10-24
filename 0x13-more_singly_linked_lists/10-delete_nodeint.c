#include "lists.h"

/**
 * detele_nodeint_at_index - function that deletes the node at a given index
 * @head: the address of the pointer to the first node
 * @index: the index of the node to be deleted
 * Return: return 1 on success, if not return -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *element, *prv_element;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		element = *head;
		*head = (*head)->next;
		free(element);
		return (1);
	}
	element = *head;
	while (head)
	{
		if (x == index)
		{
			prv_element->next = element->next;
			free(element);
			return (1);
		}
		x++;
		prv_element = element;
		element = element->next;
	}
	return (-1);
}
