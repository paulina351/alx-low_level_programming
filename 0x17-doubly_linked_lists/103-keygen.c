#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - in generating password for crackme5
 * @argc: the count of arguments
 * @argv: the arrays of pointers
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), i, temp
