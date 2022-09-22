#include "main.h"
/**
 * _strcat -> concatenate two strings into one string.
 * @dest: is a pointer variable argument.
 * @src: is a pointer variable argument.
 * Return: dest which is a pointer.
 */
char *_strcat(char *dest, char *src)
{
int len = 0, i;

while (dest[len])
{
len++;
}

for (i = 0; src[i] != 0; i++)
{
dest[len] = src[i];
len += 1;
}
dest[len] = '\0';
return (dest);
}
