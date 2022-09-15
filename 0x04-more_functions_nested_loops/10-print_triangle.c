#include "main.h"
/**
 * print_triangle -> prints a triangle of #s
 * @size: is the size of the triangle
 *
 */
void print_triangle(int size);
{
int i;
int j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)

if (i + j <= (size - 1 * 2))
{
_putchar(' ');
}

for (int j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('#');
_putchar('\n');
}
}



