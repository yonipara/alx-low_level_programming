#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
const list_t *tmp = h;

for (; tmp != NULL; tmp = tmp->next)
{
if (tmp->str == NULL)
{
printf("[0] (nil)\n");
n++;
}
else
{
printf("[%i] [%s]\n", tmp->len, tmp->str);
n++;
}
}
return (n);
}
