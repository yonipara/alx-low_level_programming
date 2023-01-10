#include <stdio.h>
#include "main.h"
/**
 * print_number -> prints all the decimal digits of an integer number
 *
 */

void print_number(int n)
{
int c;
char *p = &(char)n;
while ((c = fgetc(p) != '\0')
{
if (c >= 48 && c <= 57)
{
_putchar(c);
}
}
}
