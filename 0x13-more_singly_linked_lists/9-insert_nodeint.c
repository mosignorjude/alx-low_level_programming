#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: head of node
 * @idx: index of the node.
 * @n: data of the new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp;
	listint_t *newNode;

	temp = *head;
	while (count < idx - 1)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		count++;
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}

