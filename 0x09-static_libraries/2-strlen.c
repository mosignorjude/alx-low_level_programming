#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string to find the length
 * Return: length the string.
 */
int _strlen(char *s)
{
	char *ptr = s;
	int strlen;

	strlen = 0;

	while (*ptr != '\0')
	{
		strlen++;
		ptr++;
	}
	return (strlen);
}
