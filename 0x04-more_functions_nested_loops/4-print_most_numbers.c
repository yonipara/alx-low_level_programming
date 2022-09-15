#include "main.h"
/**
 * print_most_numbers -> prints numbers except 2 and 4
 *
 */
void print_most_numbers(void)
{
int a = 48;
for (a = 48; a < 58; a++)
{
if ((a == 50) || (a == 52))
{
}
else
{
_putchar(a);
}
}
_putchar('\n');
}
