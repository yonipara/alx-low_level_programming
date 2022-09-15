#include "main.h"
/**
 * more_numbers -> prints same numbers consecutively in a new line
 *
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 14; j++)
{
_putchar(j + '0');
}
_putchar('\n');
}
}
