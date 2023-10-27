#include "main.h"

/**
 * flip_bits - Count the bits that need to be changed
 * from one number to another.
 * @n: Starting number.
 * @m: Ending number.
 * Return: Number of bits to be changed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k, rounder = 0;
unsigned long int previous;
unsigned long int ex = n ^ m;

for (k = 63; k >= 0; k--)
{
previous = ex >> k;
if (previous & 1)
rounder++;
}
return (rounder);
}
