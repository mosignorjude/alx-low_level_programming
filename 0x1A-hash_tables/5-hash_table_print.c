#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 *
 * Return: prints the key/value in the order they appear in the hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, n, j;
	hash_node_t *current;

	j = 0;
	n = 0;
	if (ht == NULL)
		return;

	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			j++;
			current = current->next;
		}
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key,
					current->value);
			n++;
			current = current->next;
			if (n < j)
				printf(", ");
		}
	}
	printf("}\n");
}
