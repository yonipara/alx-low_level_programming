#include "main.h"
/**
 * _strncat -> concatenates two strings by taking size.
 * @dest: a pointer argument of type char
 * @src: a pointer argument of type char
 * @n: an integer argument
 * Return: the concatenated strings pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, dest_len = 0;

while (*(dest + i))
{
dest_len++;
i++;
}

for (i = 0; *(src + i) &&i < n; i++)
{
*(dest + dest_len++) = *(src + i);
}
return (dest);
}
