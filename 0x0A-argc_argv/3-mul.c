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
	int mul = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int num_eqv = atoi(argv[i]);

			mul *= num_eqv;
		}
		printf("%d\n", mul);
	}
	return (0);
}
