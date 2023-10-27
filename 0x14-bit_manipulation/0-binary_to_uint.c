#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary representation to an unsigned integer
 * @b: A string containing binary digits
 * Return: The unsigned integer equivalent of the binary representation
 */

unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int sam = 0;

if (!b)
return (0);
for (a = 0; b[a]; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
sam = 2 * sam + (b[a] - '0');
}
return (sam);
}
