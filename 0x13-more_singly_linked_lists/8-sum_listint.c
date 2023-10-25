#include "lists.h"

/**
 * sum_listint - Calculate the sum of all data in a listint_t list
 * @head: A pointer to the first node in the linked list
 *
 * Return: The total sum of the data
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}

