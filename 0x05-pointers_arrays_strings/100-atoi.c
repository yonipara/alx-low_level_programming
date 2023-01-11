#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: a pointer to a string.
 * Return: integer.
 */
int _atoi(char *s)
{
unsigned int count = 0, size = 0, oi = 0, pn = 1, n = 1, i;
while (s[count] != '\0')
{
if (size > 0 && (s[count] < '0' || s[count] > '9'))
break;
if (s[count] == '-')
pn *= -1;
if (s[count] >= '0' && s[count] <= '9')
{
if (size > 0)
n *= 10;
size++;
}
count++;
}
for (i = count - size; i < count; i++)
{
oi = oi + ((s[i] - 48) * n);
n /= 10;
}
return (oi *pn);
}


