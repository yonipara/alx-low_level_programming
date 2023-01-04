#include "main.h"
/**
 * _pow_recursion -> power of an integer number.
 * @x: base an integer argument.
 * @y: exponent a positive integer argument.
 * Return: the power of a number.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, (y - 1)));
}

