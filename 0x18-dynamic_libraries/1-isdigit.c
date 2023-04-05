#include "main.h"
/**
 * _isdigit -> checks if a character is a decimal digit
 * @c: an integer argument
 * Return: 1 if success and 0 if failure
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
else
{
return (0);
}
}
