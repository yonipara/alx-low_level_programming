#include "main.h"
/**
 * times_table -> print a nines time table
 * Return: nothing just prints
 */
void times_table(void)
{
int i = 0;

while (i <= 9)
{
int j = 0;
int x;
while (j <= 9)
{
if (j != 9)
{
x = j * i;
_putchar(x + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
x = j * i;
_putchar(x + '0');
}
j++;
}
_putchar('\n');
i++;
}
}
