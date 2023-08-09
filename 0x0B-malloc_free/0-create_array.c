#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of array.
 * @c: character of the array.
 * Return: a pointer to the specific char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	ptr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}

