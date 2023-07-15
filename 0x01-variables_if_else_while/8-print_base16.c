#include <stdio.h>
/**
 * main- entry point
 * Return: always return 0
 */
int main(void)
{
	int num;
	char letters;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
