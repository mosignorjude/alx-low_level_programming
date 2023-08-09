#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - allocates a new memory that contains a copy of a string.
 * @str: character of the array.
 * Return: a pointer to the memory.
 */
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *ptr;

	while (str[len] != '\0')
	{
		len++;
	}
	ptr = (char *) malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
	{
		if (str[i] != '\0')
		{
			ptr[i] = str[i];
		}
		else
		{
			return (NULL);
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
