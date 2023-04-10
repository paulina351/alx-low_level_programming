#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: binary number
 * Return: 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int digit = 0, value = 0, sum = 0, power = 0;
	const char *str;

	if (b == NULL)
		return (0);

	str = b;

	while (*b != '\0')
	{
		b++;
	}
	b--;

	while (b >= str)
	{
		if (*b < '0' || *b > '1')
			return (0);
		digit = *b - '0';
		value = digit * (1 << power);
		sum += value;
		b--;
		power++;
	}
	return (sum);
}
