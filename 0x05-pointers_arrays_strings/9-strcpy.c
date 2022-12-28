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
int i = 0;
int j = 0;
dest = &dest[0];
src = &src[0];

while (*(src + i) != '\0')
{
i++;
j++;
}
for (i = 0; i < j; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}

