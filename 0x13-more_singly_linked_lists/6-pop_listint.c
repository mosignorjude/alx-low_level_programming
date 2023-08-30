#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete the head of a node.
 * @head: list_t list to be deleted
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
