#include "main.h"
/**
 * string_toupper -> changes a string of characters to upper case
 * @src: a pointer argument
 * Return: a pointer for a string
 */
char *string_toupper(char *src)
{
int i = 0;

while (src[i++]
{
if (src[i] >= 'a' && src[i] <= 'z')
{
src[i] -= 32;
}
}
return (src);
}
