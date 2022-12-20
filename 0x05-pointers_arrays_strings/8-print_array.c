#include <stdio.h>
#include "main.h"

/**
 * print_array -> prints an array
 * @a: a pointer argument for an array
 * @n: an int argument
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i;

if (n == 0)
{
printf("%d\n", *a);
}
else if (n < 0)
{
;
}
else
{
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d\n", *(a + i));
}
else
{
printf("%d", *(a + i));
printf(",");
printf(" ");
}
}
}
}
