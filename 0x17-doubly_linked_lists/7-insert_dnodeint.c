#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @h: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *temp = *h;
dlistint_t *temp2 = NULL;
dlistint_t *temp3 = *h;

dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
return (NULL);
}

new->n = n;
new->prev = NULL;
new->next = NULL;

for (i = 0; temp3->next != NULL; temp3 = temp3->next)
{
i++;
}

if (idx > i + 1)
{
	return (NULL);
}

if (idx == 0)
{
new->next = *h;
(*h)->prev = new;
*h = new;
return (new);
}

for (i = 0; i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
new->prev = temp;
temp->next = new;
temp2 = temp->next;
temp2->prev = temp;
temp2->next = new->next;
}

temp = temp->next;
}

return (NULL);
}
