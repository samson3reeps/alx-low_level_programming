#include "main.h"

/**
 * set_bit - Set a bit at the given index to 1.
 * @n: A pointer to the number to be modified.
 * @index: The index where the bit is set to 1.
 * Return: 1 for success, -1 for failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
