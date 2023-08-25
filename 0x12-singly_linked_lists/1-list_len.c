#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints element of a list
 * @h: node pointer
 * Return: number of elements
*/
size_t list_len(const list_t *h)
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
