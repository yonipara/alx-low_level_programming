#include <stdio.h>
#include "main.h"

/**
 * _strcpy -> copys from source to destination
 * @dest: a pointer argument for an array
 * @src: a pointer argument for an array
 * Return: a pointer to an array
 */
char *_strcpy(char *dest, char *src)
{
int len, i;

for (len = 0; src[len] != '\0'; len++)
{
	;
}
for (i = 0; i < len; i++)
{
*(dest + i) = *(src + i);
}
*(dest + i) = '\0';
return (dest);
}

