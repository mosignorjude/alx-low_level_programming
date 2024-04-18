#include "hash_tables.h"
#include <math.h>
#include <stdlib.h>
/**
 * key_index - function that gives the index of the key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored
 * in the array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key != NULL)
		index = hash_djb2(key);

	return (index % size);
}

