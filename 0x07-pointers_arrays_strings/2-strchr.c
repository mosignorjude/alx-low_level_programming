#include "main.h"
/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 * Return: a pointer to the occurrence of c.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

