#include "lists.h"

/**
 * free_list - this function frees a list
 * @head: head of the node
 * Return: there is no return
 */

void free_list(list_t *head)
{
	list_t *newelement;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		newelement = head->next;
		free(head->str);
		free(head);
		head = newelement;
	}
	free(head->str);
	free(head);
}
