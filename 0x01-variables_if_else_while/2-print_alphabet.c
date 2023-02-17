#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Playing the alphabet game
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
