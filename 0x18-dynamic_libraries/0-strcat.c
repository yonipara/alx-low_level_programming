#include "main.h"
/**
 * _strcat -> concatenate two strings into one string.
 * @dest: is a pointer variable argument.
 * @src: is a pointer variable argument.
 * Return: dest which is a pointer.
 */
char *_strcat(char *dest, char *src)
{
int len = 0, i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[len] != '\0')
len++;

for (j = 0; j < len; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
