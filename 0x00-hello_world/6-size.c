#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char c;
	int i = 10;
	long int x = 20;
	long long int y = 30;
	float d = 40;

	printf("Size of a char: %lu byte\(s\)\n", sizeof(c));
	printf("Size of an int: %lu byte\(s\)\n", sizeof(i));
	printf("Size of a long int: %lu byte\(s\)\n", sizeof(x));
	printf("Size of a long long int: %lu byte\(s\)\n", sizeof(y));
	printf("Size of a float: %lu byte\(s\)\n", sizeof(d));

	return (0);
}
