#include "lists.h"

/**
 * free_listint - Frees a linked list of type listint_t
 * @head: A pointer to the beginning of the list
 */
void free_listint(listint_t *head)
{
listint_t *current;

while (head)
{
current = head->next;
free(head);
head = current;
}
}

