#include "main.h"

/**
 * puts_half - print the 2nd half of a string
 * @str: string to be modified
 * Return: Void
 */
void puts_half(char *str)
{
	int i, n, j, start_count;
	int strlen = 0;


	/*find the string length*/
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	/*print the string*/
	if (strlen % 2 != 0)
	{
		n = (strlen - 1) / 2;
		start_count = strlen - n;

		for (j = start_count; j < strlen; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (strlen % 2 == 0)
	{
		for (i = (strlen / 2); str[i] != 0; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n);
}
