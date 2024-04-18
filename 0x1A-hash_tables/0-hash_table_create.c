#include "hash_tables.h"
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: Hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **t_items;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		perror("malloc failed");
		return (NULL);
	}
	table->size = size;
	t_items = malloc(sizeof(hash_node_t *) * size);
	if (t_items == NULL)
	{
		perror("table items malloc failed");
		free(table);
		return (NULL);
	}
	table->array = t_items;
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
