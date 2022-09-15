#include "main"
/**
 * print_numbers -> prints all the decimal digits
 * Return: (0); for success
 *
 */
void print_numbers(void)
{
int a = 0;

while (a <= 9)
{
_putchar(a + '0');
a++;
}
_putchar('\n');
