#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: old size
 * @new_size: new size
 * Return: address to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL); /*Memory allocation failed*/
	}
	/*Copy data from old block to new block*/
	for (i = 0; i < old_size && i < new_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}

