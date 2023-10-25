#include "lists.h"

/**
 * get_nodeint_at_index - Retrieve a node at a specified index in a linked list
 * @head: A pointer to the first node in the linked list
 * @index: The index of the node to be retrieved
 *
 * Return: A pointer to the desired node, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
