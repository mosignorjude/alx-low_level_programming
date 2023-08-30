#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - frees a linked list
 * @head: head of node
 * @index: index of the node starting from 0.
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

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
