#include "main.h"
/**
 * _strncpy -> copys character strings of specified size.
 * @dest: pointer argument of type char.
 * @src: pointer argument of type char.
 * @n: an integer argument.
 * Return: a pointer of a string to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{i++;
dest[i] = '\0';
}
return (dest);
}
