#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @head: pointer to the head of the linked list
 * @index: index of the node to delete
 * Return: 1 if successful, -1 if failure (including out of bounds index)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *prevNode, *nextNode;

	if (*head == NULL)
		return (-1);

	while (count < index)
	{
		if (temp == NULL)
			return (-1);
		prevNode = temp;
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);

	nextNode = temp->next;
	prevNode->next = nextNode;

	free(temp);
	return (1);
}
