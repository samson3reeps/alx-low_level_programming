#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index in a decimal number.
 * @n: The decimal number to search in.
 * @index: The index of the bit to retrieve.
 * Return: The value of the bit at the specified index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
int amonut_of_bit_values;

if (index > 63)
return (-1);
amonut_of_bit_values = (n >> index) & 1;
return (amonut_of_bit_values);
}
