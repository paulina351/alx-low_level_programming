#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - return the length of the string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int num;

	num = 0;
	while (s[num])
	{
		num++;
	}
	return (num);
}

/**
 * f4 - keygen file four
 * @len: length of array
 * @argv: array of arguments
 * Return: int
 */
int f4(int len, char *argv)
{
	int a = 0, b = 0;

	while (a < len)
	{
		if (argv[a] > b)
			b = argv[a];

		a++;
	}
	srand(b ^ 14);
	a = rand();
	return (a);
}

/**
 * f5 - keygen file five
 * @argv: array of argument
 * @len: length of arguments
 * Return: int
 */

int f5(int len, char *argv)
{
	int a = 0;
	long int b = 0;

	while (a < len)
	{
		b += argv[a] * argv[a];
		b = (int)b;
		a++;
	}
	b = (b ^ 239) & 63;
	return (b);
}

/**
 * f6 - keygen file six
 * @argv: array of arguments
 * Return: int
 */

int f6(char *argv)
{
	int a = 0;
	long int b = 0;

	while (a < argv[0])
	{
		b = rand();
		a++;
	}
	b = (b ^ 229) & 63;
	return (b);
}

/**
 * main - generates and prints passwords for the crakeme5 executable.
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;
	long int stat = 0;
	int len = 0;
	char arr[7] = {0};
	char t[] = "A-CHRDw871NS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	if (argc != 2)
		return (-1);
	len = _strlen(argv[1]);
	arr[0] = t[(len ^ 59) & 63];

	while (a < len)
	{
		stat += argv[1][a];
		a++;
	}
	arr[1] = t[(stat ^ 79) & 63];
	stat = 1, a = 0;
	while (a < len)
	{
		stat *= argv[1][a];
		stat = (int)stat;
		a++;
	}
	arr[2] = t[(stat ^ 85) & 63];
	arr[3] = t[f4(len, argv[1]) & 63];
	arr[4] = t[f5(len, argv[1])];
	arr[5] = t[f6(argv[1])];
	printf("%s", arr);
	return (0);
}
