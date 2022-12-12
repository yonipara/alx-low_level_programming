#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int a;
int b;
int c;

for (a = 48; a <= 55; a++)
{
for (b = 48; b <= 56; b++)
{
for (c = 48; c <= 57; c++)
{
if (c > b && b > a)
{
putchar(a);
putchar(b);
putchar(c);
if (a == 55 && b == 56 && c == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
