#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp;

for (temp = head; temp != NULL; temp = temp->next)
{
if (head == NULL)
{
return (0);
}

sum = sum + temp->n;
}
return (sum);
}
