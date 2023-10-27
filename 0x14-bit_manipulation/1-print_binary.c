#include "main.h"
#include <stdio.h>

/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
int tunde, sam = 0;
unsigned long int new;

for (tunde = 63; tunde >= 0; tunde--)
{
new = n >> tunde;
if (new & 1)
{
_putchar('1');
sam++;
}
else if (new)
putchar('0');
}
if (!new)
_putchar('0');
}
