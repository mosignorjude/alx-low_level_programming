#include "hash_tables.h"
/**
 * handle_collision - add the new node to the beginning of the list
 * @h: head node pointer
 * @node: table item
 * @index: index of the array
 * Return: void.
 */
void handle_collision(hash_table_t **h, hash_node_t **node,
		unsigned long int index)
{
	hash_node_t *new;
	hash_table_t *head;

	head = *h;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return;

	new = *node;
	if (head == NULL)
	{
		new->next = NULL;
		head->array[index] = new;
	}
	else
	{
		new->next = head->array[index];
		head->array[index] = new;
	}
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
	hash_node_t **new_node;

	k = (const unsigned char *)key;
	if (k == NULL)
		return (0);
	index = key_index(k, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		perror("new node malloc failed");

	(*new_node)->key = malloc(sizeof(char) * strlen(key) + 1);
	if ((*new_node)->key == NULL)
		perror("key malloc failed");

	(*new_node)->value = malloc(sizeof(char) * strlen(value) + 1);
	if ((*new_node)->value == NULL)
		perror("value malloc failed");

	(*new_node)->next = NULL;
	strcpy((*new_node)->key, (char *)k);
	strcpy((*new_node)->value, value);
	if (ht->array[index] == NULL)
		ht->array[index] = *new_node;
	else
	{
		if (strcmp(ht->array[index]->key, (char *)k) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			handle_collision(&ht, new_node, index);
		}
	}
	return (1);
}
