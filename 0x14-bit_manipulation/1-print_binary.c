#include "main.h"
#include <stdio.h>

/**
 * _pow - Compute the result of raising the base to the specified power.
 * @base: The base of the exponentiation.
 * @power: The exponent (power) to which the base is raised.
 * Return: The computed value of (base ^ power).
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int num;
unsigned int a;

num = 1;
for (a = 1; a <= power; a++)
num *= base;
return (num);
}

/**
 * print_binary - Display the binary representation of a number.
 * @n: The number to be printed in binary notation.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char flag;

flag = 0;
divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
