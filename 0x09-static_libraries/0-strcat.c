#include "main.h"

/**
 * _strcat - concatenate two string
 * @src: source string
 * @dest: destination variable
 * Return: pointer dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_length = 0;
	/*get the dest string length*/
	while (dest[dest_length] != '\0')
	dest_length++;

	/*appends characters from src to dest*/
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];

	}
	/*Add the null terminator to the destination string*/
	dest[dest_length + i] = '\0';

	return (dest);
}
