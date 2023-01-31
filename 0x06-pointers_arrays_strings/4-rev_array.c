#include "main.h"
/**
 * reverse_array -> reverses an array of integers
 * @a: ab integer argument
 * @n: an integer argument
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i = 0,  tmp;
int j = n / 2;
n--;

while (n > j)
{
tmp = a[n];
a[n] = a[i];
a[i] = tmp;
n--;
i++;
}
}
