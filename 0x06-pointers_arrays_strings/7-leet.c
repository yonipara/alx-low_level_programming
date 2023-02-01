#include "main.h"
/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded string
 */
char *leet(char *str)
{
int i, j;
char leet[8] = {'o', 'L', '?', 'E', 'A', '?', '?', 'T'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j <= 7; j++)
{
if (str[i] == leet[j] || str[i] - 32 == leet[j])
{
str[i] = j + '0';
}
}
}
return (str);
}
