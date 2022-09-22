#include "main.h"
/**
 * _strcat -> concatenate two strings into one string.
 * @dest: is a pointer variable argument.
 * @src: is a pointer variable argument.
 * Return: p which is a pointer.
 */
char *_strcat(char *dest, char *src)
{
char destination[100];
int i, j;
char *p = destination;

for (i = 0; *dest != '\0'; i++)
{
destination[i] = *dest;
dest = dest + i;
}
for (j = 0; *src != '\0'; j++)
{
i++;
destination[i] = *src;
src = src + j;
}
return (p);
}
