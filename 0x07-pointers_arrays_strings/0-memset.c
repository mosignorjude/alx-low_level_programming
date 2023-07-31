#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to the address of the memory block to fill.
 * @b: character to fill the memory with.
 * @n: number of characters to fill
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
