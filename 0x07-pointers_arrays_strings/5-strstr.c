#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			const char* h = haystack;
			const char* n = needle;

			while (*h == *n && *n != '\0')
			{
				h++;
				n++;
			}
			if (*n == '\0')
			{
				return (char*)haystack;
			}
		}
		haystack++;
	}
	return NULL;
}
