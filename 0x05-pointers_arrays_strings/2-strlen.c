#include "main.h"
/**
 * _strlen -> counts the number of characters in a string
 * @s: is a pointer variable
 * Return: the number of characters
 */
int _strlen(char *s)
{int a = 0;
while (*s != '\0')
{
s++;
a++;
}
return (a);
}
