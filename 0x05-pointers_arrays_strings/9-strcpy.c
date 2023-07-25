#include "main.h"

/**
 * _strcpy - copies string to a variable
 * @src: source variable
 * @dest: destination variable
 * Return: void
*/
char *_strcpy(char *dest, char *src)
{
	/*Create a new pointer to hold the destination address*/
	char *dest_ptr = dest;

	/*Copy characters from src to dest*/
	while (*src != '\0')
	{
		*dest_ptr = *src;
		src++;
		*dest_ptr++;

	}
	/*Add the null terminator to the destination string*/
	*dest_ptr = '\0';

	return (dest);
}
