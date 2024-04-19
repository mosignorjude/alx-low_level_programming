#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * handle_collision - add the new node to the beginning of the list
 * @h: head node pointer
 * @node: table item
 * @index: index of the array
 * Return: void.
 */
void handle_collision(hash_table_t **h, hash_node_t *node,
		unsigned long int index)
{
	hash_node_t *new;
	hash_table_t *head;

	head = *h;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return;

	new->key = strdup(node->key);
	new->value = strdup(node->value);
	if (new->key == NULL || new->value == NULL)
	{
		perror("malloc failed");
		free(new);
		return;
	}
	new->next = head->array[index];
	head->array[index] = new;
}
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to add or update the key/value
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if successful otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *k;
	hash_node_t *new_node;
	hash_node_t *current;

	k = (const unsigned char *)key;
	if (k == NULL || ht == NULL)
		return (0);
	index = key_index(k, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		perror("new node malloc failed");

	new_node->next = NULL;
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				perror("malloc failed");
			return (1);
		}
		current = current->next;
	}
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
		handle_collision(&ht, new_node, index);

	return (1);
}
