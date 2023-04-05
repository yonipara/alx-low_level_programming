#include "main.h"
#include <stddef.h>
/**
 * _strncat -> concatenates two strings by taking size.
 * @dest: a pointer argument of type char
 * @src: a pointer argument of type char
 * @n: an integer argument
 * Return: the concatenated strings pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int len;

if (n < 0)
return NULL;

while (dest[i] != '\0')
	i++;

for (len = 0; src[len] != '\0' && len < n; len++)
{
	dest[i] = src[len];
	i++;
}
dest[i] = '\0';
return (dest);
}

