#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0; /*the return type and variable*/
	int i;
	
	while (*s != '\0') /*while the value of s is not a null byte*/
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s) /*compare a character to the value of string*/
			{
				length += 1;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (length);
			}
		}
		s++;
	}
	return (length);
}
