#include "main.h"

/**
 * _strchr -> locates a character in a string.
 * @s: the string to be searched.
 * @c: the character to be located.
 * 
 * Return: a pointer to the occurence of the character
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
