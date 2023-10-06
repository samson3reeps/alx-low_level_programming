#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string in new memory space location
 * @str: input string
 * Return: pointer to the duplicated string or NULL on failure
 */
char *_strdup(char *str)
{
    int j;
    char *string;
    int count = 0;

    if (str == NULL)
        return (NULL);

    for (j = 0; str[j] != '\0'; j++)
        count++;

    string = malloc(sizeof(char) * (count + 1));

    if (string == NULL)
        return (NULL);

    for (j = 0; str[j] != '\0'; j++)
        string[j] = str[j];

    return (string);
}
