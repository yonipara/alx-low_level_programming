#include "main.h"

/**
 * _memcpy -> copies memory area
 * @dest: a pointer to the memory area to be filled.
 * @src: a pointer to the source
 * @n: the number of bytes to be filled.
 * Return: a pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *destination = dest;
char *source = src;

for (i = 0; i < n; i++)
{
destination[i] = source[i];
}
return (destination);
}
