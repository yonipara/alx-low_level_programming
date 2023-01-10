#include "main.h"
/**
 * _strlen -> counts the number of characters in a string
 * @s: is a pointer variable
 * Return: the number of characters
 */
int _strlen(char *s)
{
int i =0;
while ((*(s + i)) != '\0')
{
i++;
}
return (i);
}
