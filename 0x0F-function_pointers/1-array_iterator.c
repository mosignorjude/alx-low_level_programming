#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on an array.
 * @array: array
 * @size: size of array;
 * @action:  pointer to the function you need to use
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
666{
	unsigned int i;

	if (*action == NULL)
	return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
