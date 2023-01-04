#include "main.h"
/**
 * _strlen_recursion -> count number of characters recursively.
 * @s: a pointer to a string.
 * Return: the number of characters.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion((s + 1)));
}
