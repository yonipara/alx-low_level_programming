#include "main.h"
/**
 * string_toupper -> changes a string of characters to upper case
 * @str: a pointer argument
 * Return: a pointer for a string
 */
char *string_toupper(char *str)
{
int i = 0;

while (str[i++])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
return (str);
}
