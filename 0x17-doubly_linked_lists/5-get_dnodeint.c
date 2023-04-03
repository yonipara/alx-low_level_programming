#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

for (; i < index; i++)
{
head = head->next;

if (head == NULL)
{
return (NULL);
}
}
return (head);
}
