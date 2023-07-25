#include "main.h"

/**
* rev_string- reverses a string
* @s: the string to be reversed
* Return: void
*/
void rev_string(char *s)
{
	int strlen = 0;
	int index = 0;
	char tmp;

	while (s[index++])
	strlen++;

	for (index = strlen - 1; index >= strlen / 2; index--)
	{
		tmp = s[index];
		s[index] = s[strlen - index - 1];
		s[strlen - index - 1] = tmp;
	}
}
