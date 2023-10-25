#include "lists.h"

/**
 * find_listint_loop - Locate a loop in a linked list
 * @head: A pointer to the linked list to search for a loop
 *
 * Return: Addr of node where loop starts, or NULL if no loop is found
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
return (NULL);

while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}
