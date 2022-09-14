#include "main.h"
/**
 * print_alphabet_x10 -> prints the lowercase alphabet.
 */

void print_alphabet_x10(void)
{

int i = 0;

while (i < 10)
{
int a = 97;
int z = 122;

while (a <= z)
{
_putchar(a);
a++;
}
_putchar('\n');
i++;
}
}
