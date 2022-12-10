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

for (a = 48; a <= 56; a++)
{
for (b = 48; b <= 57; b++)
{
if (b > a)
{
if (a == 56 && b == 57)
{
putchar(a);
putchar(b);
putchar('\n');
}
else
{
putchar(a);
putchar(b);
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
