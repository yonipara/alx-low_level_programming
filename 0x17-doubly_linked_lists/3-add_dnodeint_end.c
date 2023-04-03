#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp = *head;
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}

if (*head == NULL)
{
new->prev = NULL;
new->n = n;
new->next = NULL;
*head = new;
return (new);
}

while (temp->next != NULL)
{
	temp = temp->next;
}
new->n = n;
new->prev = temp;
new->next = NULL;
temp->next = new;
temp = temp->next;

return (*head);
}
