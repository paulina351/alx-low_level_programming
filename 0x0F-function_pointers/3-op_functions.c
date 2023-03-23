#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - return the sum of a and b
 * @a: 1
 * @b: 2
 *
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the substration of a and b
 * @a: 1
 * @b: b
 *
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the multiplication of a and b
 * @a: 1
 * @b: 2
 *
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of division of a by b
 * @a: 1
 * @b: 2
 *
 * Return: 0
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
 * op_mod - return the remainder of the division of a by b
 * @a: 1
 * @b: 2
 *
 * Return: 0
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
