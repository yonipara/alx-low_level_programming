#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -> prints all integers upto 98
 * @n: integer argument
 *
 */
void print_to_98(int n)
{
int x = 98;

if (n == x)
{
printf("%d", n);
}
else
{
while (n >= x)
{
printf("%d, ", n);
n--;
}
while (n <= x)
{
printf("%d, ", n);
n++;
}
}
