#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocates memory to a 2d array.
 * @width: width of array.
 * @height: height of array.
 * Return: pointer to the allocated memory.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	/*allocating the memory for the array to the rows i.e height*/
	ptr = (int **) malloc(height * sizeof(int *));
	/*error handling for allocation failed*/
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			/*free previously allocated memory and return null*/
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		/*initialize elements in the row to some default value*/
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}

