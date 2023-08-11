#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max && j <= (max - min); i++, j++)
	{
		ptr[j] = i;
	}
	return (ptr);
}
