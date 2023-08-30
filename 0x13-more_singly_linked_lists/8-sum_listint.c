#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - adds data of a linked list
 * @head: head of node
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
