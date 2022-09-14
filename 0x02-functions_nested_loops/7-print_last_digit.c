#include "main.h"
/**
 * print_last_digit -> prints the last digit of a number
 * @n: is the argument variable
 * Return: nothing just prints
 */
int print_last_digit(int n)
{
int x;
x = n % 10;
_putcar('0' + x);
return (x);
}
