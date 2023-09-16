#include <unistd.h> // Include the header for write function

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_numbers - Prints the numbers 0-9
 */
void print_numbers(void)
{
    char c;

    for (c = '0'; c <= '9'; c++)
    {
        _putchar(c);
    }
    _putchar('\n');
}

int main(void)
{
    print_numbers();
    return (0);
}
