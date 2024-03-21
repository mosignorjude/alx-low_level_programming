#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t n = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d", temp->n);
		n++;
		temp = temp->next;
	}
	return (n);
}
