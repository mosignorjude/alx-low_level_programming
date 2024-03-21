#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: pointer to the pointer to the head of the list
 * @n: integer value of the node
 *
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *node_ptr;

	node_ptr = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (node_ptr->next != NULL)
			node_ptr = node_ptr->next;

		node_ptr->next = new_node;
		new_node->prev = node_ptr;
		node_ptr = new_node;
	}
	return (new_node);
}
