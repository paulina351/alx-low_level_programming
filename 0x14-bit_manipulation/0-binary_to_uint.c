#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointing to a string
 * Return: converted number, 0 or NULL
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int dgt = 0;
unsigned int val = 0;
unsigned int add = 0;
unsigned int mul = 0;
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
dgt = *b - '0';
val = dgt * (1 << mul);
add += val;
b--;
mul++;
}
return (add);
}
