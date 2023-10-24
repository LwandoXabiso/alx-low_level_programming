#include "lists.h"

/**
 * pop_listint - function that pops the head node of the list
 * @head: the address of the pointer to the first node
 * Return: returns the value of the popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *element;
	int x;

	if (!head || !*head)
		return (0);

	element = (*head)->next;
	x = (*head)->x;
	free(*head);
	*head = element;
	return (x);
}
