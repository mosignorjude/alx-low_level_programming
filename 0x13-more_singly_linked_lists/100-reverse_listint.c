#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the head of the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *nextNode;

	if (*head == NULL)
		return (NULL);

	temp = *head;
	*head = 0;
	while (temp != NULL)
	{
		nextNode = temp->next;
		temp->next = *head;
		*head = temp;
		temp = nextNode;
	}
	return (*head);
}
