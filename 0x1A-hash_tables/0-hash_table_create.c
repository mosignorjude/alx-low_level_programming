#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 *
 * Return: Hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t) * size);
	if (table == NULL)
	{
		perror("malloc failed");
		return (NULL);
	}
	table->size = size;
	table->array = NULL;

	return (table);
}
