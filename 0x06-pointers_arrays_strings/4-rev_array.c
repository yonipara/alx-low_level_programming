#include "main.h"
/**
 * reverse_array -> reverses an array of integers
 * @a: ab integer argument
 * @n: an integer argument
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, tmp;
for (i = n - 1; i > n/2; i--)
{
tmp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = tmp;
}
}
