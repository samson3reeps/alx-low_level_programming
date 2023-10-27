#include "main.h"

/**
 * clear_bit - Set a bit at the given index to 0.
 * @n: A pointer to the number to be modified.
 * @index: The index of the bit to clear.
 * Return: 1 for success, -1 for failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
