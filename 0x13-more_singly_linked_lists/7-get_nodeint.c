#include "lists.h"

/**
 * get_nodeint_at_index - function that returns node at index
 * @head: pointer function to the first node
 * @index: index of the node to get
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *element;
	unsigned int x;

	for (element = head, x = 0; element && x < index; element = element->next, x++
	);
	return (element);
}
