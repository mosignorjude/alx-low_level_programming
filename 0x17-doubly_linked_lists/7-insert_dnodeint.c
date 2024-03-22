#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specific index
 * @head: pointer to the head of the linked list
 * @idx: index at which to insert the new node
 * @n: data for the new node
 * Return: address of the new node if successful, NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx,
		int n)
{
	unsigned int count = 0;
	dlistint_t *temp, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (count < idx - 1)
		{
			if (temp == NULL)
				return (NULL);

			temp = temp->next;
			count++;
		}
		newNode->next = temp->next;
		newNode->prev = temp;
		temp->next->prev = newNode;
		temp->next = newNode;
	}
	return (newNode);
}
