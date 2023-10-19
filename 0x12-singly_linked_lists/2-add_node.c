#include "lists.h"

/**
 * add_node - insert a new node at the beginning
 * @head: head of the node
 * @str: the string to store the new element
 * Return: Address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newelement;
	unsigned int x, temp = 0;

	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);

	newelement->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		temp++;

	newelement->len = temp;
	newelement->next = *head;
	*head = newelement;

	return (*head);
}
