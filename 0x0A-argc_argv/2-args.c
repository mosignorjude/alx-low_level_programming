#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count.
 * @argv: command line argument
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}

