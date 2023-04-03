#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
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

new->n = n;
new->next = *head;
new->prev = NULL;
(*head)->prev = new;
*head = new;
return (new);
}
