#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print list
 * @h: node pointer
 * Return: number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("NULL");
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
