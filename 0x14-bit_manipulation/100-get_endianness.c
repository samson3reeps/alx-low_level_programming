#include "main.h"

/**
 * get_endianness - Check the endianness of the system.
 * Return: 0 for big endian, 1 for little endian.
 */

int get_endianness(void)
{
int x;
char *y;

x = 1;
y = (char *)&x;
return (*y);
}
