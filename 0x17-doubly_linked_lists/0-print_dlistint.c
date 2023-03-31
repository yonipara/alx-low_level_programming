#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp;
size_t len = 0;

for (temp = h; temp != NULL; temp = temp->next)
{
printf("%i\n", temp->n);
len++;
}

return (len);
}
