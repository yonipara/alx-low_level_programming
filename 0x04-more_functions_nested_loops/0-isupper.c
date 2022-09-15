#include "main.h"
/**
 * isupper -> checks if a character is uppercase
 * Return: 1 for succes and 0 for failure
 * @c: an integer argument
 *
 */
int isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
