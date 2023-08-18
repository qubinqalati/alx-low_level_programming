#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - lorem ipsum
  * @a: lorem ipsum
  * @b: lorem ipsum
  *
  * Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - lorem ipsum
  * @a: lorem ipsum
  * @b: lorem ipsum
  *
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - lorem ipsum
  * @a: lorem ipsum
  * @b: lorem ipsum
  *
  * Return: int
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - lorem ipsum
  * @a: lorem ipsum
  * @b: lorem ipsum
  *
  * Return: int
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - lorem ipsum
  * @a: lorem ipsum
  * @b: lorem ipsum
  *
  * Return: int
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
