#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - frees a doubly linked list
 * @head: head of node
 * @index: index of the node starting from 0.
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = head;
	while (count < index)
	{
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
		count++;
	}
	return (temp);
}
