#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t len = 0;

	for (temp = h; temp != NULL; temp = temp->next)
	{
		printf("%i\n", temp->n);
		len++;
	}

	return (len);
}
