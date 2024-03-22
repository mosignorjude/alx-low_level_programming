#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - adds data of a linked list
 * @head: head of node
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

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
