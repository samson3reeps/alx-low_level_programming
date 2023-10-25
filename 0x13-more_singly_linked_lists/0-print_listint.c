#include "lists.h"

 /**
 * print_listint - Display all elements of a linked list
 * @h: Pointer to the linked list of type listint_t
 *
 * Return: Number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (num);
}
