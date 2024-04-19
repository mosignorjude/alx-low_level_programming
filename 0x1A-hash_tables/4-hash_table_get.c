#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: Key you are looking for
 *
 * Return: value associated with the element or NUll if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;
	const unsigned char *k;

	if (ht == NULL || key == NULL)
		return (NULL);

	k = (const unsigned char *)key;
	index = key_index(k, ht->size);
	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
		return (NULL);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}
	return (NULL);
}
