#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates strings to a newly allocated memory.
 * @s1: destination string.
 * @s2: source string
 * Return: pointer to the newly allocated memory.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
		if (s2 == NULL)
	{
		s2 = "";
	}
	/*get destination string length*/
	while (s1[len1] != '\0')
	{
		len1++;
	}
	/*get source string length*/
	while (s2[len2] != '\0')
	{
		len2++;
	}
	/*allocating the memory and assigning to a pointer*/
	ptr = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	/*error handling*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[len1 + i] = '\0';
	return (ptr);
}
