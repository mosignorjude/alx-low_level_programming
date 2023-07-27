#include "main.h"

/**
 * _strncpy - copies string to a variable
 * @src: source variable
 * @dest: destination variable
 * @n: number of string length to copy
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*Copy characters from src to dest*/

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	/*Add the null terminator to the destination string*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
