#include "lists.h"

/**
 * add_node_end - Adds a node at the end of the list
 * @head: The head of the node
 * @str: string to store
 * Return: Address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newelement, *currentelement;
	unsigned int x, temp = 0;

	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);

	newelement->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		temp++;

	newelement->len = temp;
	newelement->next = NULL;
	currentelement = *head;

	if (currentelement == NULL)
		*head = newelement;
	else
	{
		while (currentelement->next != NULL)
			currentelement = currentelement->next;
		currentelement->next = newelement;
	}
	return (*head);
}
