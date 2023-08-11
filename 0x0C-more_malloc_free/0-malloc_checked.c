#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked -allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
