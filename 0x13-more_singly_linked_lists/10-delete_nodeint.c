#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a specific index.
 * @head: pointer to the head of the linked list
 * @index: index of the node to delete
 * Return: 1 if successful, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *delNode, *nextNode;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (count < index - 1)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
		count++;
	}
	delNode = temp->next;
	nextNode = delNode->next;
	temp->next = nextNode;
	free(delNode);

	return (1);
}
