#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints element of a list
 * @h: node pointer
 * Return: number of elements
*/
size_t print_list(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		printf("[0] (nil)");
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
