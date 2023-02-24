#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there*/
/**
 * positive_or_negative - Entry point of the program
 * @i: integer
 * Return: 0 always
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i > 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

}
