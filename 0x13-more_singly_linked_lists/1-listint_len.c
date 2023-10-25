#include "lists.h"

/**
 * get_listint_len - Count the number of elements in a linked list
 * @h: A pointer to the linked list of type listint_t
 *
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}

return (count);
}

