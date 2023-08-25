#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints element of a list
 * @h: node pointer
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		printf("[0] (nil)");
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
