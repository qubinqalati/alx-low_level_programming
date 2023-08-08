#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: 1 dimensional array
 *
 * Return: always success
 */

int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s", argv[0]);
	}
	printf("\n");
	return (0);
}
