#include <stddef.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: input string
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32; /* Convert lowercase to uppercase */
		}
		i++;
	}

	return (str);
}
