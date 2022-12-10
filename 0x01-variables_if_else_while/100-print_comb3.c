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
putchar(a);
putchar(b);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
