#include "main.h"
/**
 * factorial -> factorial of a positive integer number.
 * @n: an integer argument.
 * Return: the factorial of a number.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
