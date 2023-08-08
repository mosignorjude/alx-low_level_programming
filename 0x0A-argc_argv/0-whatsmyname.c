#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count.
 * @argv: command line argument
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
