#include "main.h"
/**
 * print_alphabet -> prints the lowercase alphabet.
 */

void print_alphabet(void)
{
int a = 97;
int z = 122;

while (a <= z)
{
_putchar(a);
a++;
}
_putchar('\n');
}
