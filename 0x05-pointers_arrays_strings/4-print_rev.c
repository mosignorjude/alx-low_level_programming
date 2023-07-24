#include "main.h"

/**
* print_rev - prints strings in reverse
* @s: the string to be printed
* Return: void
*/
void print_rev(char *s)
{
	int i;
	int strlen;

	strlen = 0;
	/*find the string length*/
	while (s[strlen] != '\0')
	{
		strlen++;
	}
	/*reverse the string*/
	for (i = strlen - 1; i >=  0; i--)
	{
		_putchar(s[i]);

	}
}
