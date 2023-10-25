#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - function to rallocate memory for an array of pointers
 * @list: the old list to append
 * @size: the size of the new list
 * @new: the new node to add to the list
 * Return: return the pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **freshlist;
	size_t x;

	freshlist = malloc(size * sizeof(listint_t *));
	if (freshlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < size - 1; x++)
		freshlist[x] = list[x];
	freshlist[x] = new;
	return (freshlist);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: the pointer to the start of the list
 * Return: returns the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x, number = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < number; x++)
		{
			if (head == list[x])
			{
				printf("-> [%p] &d\n", (void *)head, head->n);
				free(list);
				return (number);
			}
		}
		number++;
		list = _r(list, number, head);
		printf("[%p] &d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (number);
}
