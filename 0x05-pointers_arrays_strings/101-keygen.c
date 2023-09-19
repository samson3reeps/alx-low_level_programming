#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the password generator program.
 *
 * This program generates random valid passwords for 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int password[100];
    int index, total, randomValue;

    total = 0;

    srand(time(NULL));

    for (index = 0; index < 100; index++)
    {
        password[index] = rand() % 78;
        total += (password[index] + '0');
        putchar(password[index] + '0');
        if ((2772 - total) - '0' < 78)
        {
            randomValue = 2772 - total - '0';
            total += randomValue;
            putchar(randomValue + '0');
            break;
        }
    }

    return (0);
}
