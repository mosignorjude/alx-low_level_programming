#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a specific index
 * @head: pointer to the head of the linked list
 * @idx: index at which to insert the new node
 * @n: data for the new node
 * Return: address of the new node if successful, NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	temp = *head;
	while (count < idx - 1)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
		count++;
	}
	newNode->n = n;
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
