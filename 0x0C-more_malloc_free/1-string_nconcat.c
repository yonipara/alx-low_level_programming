#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -> concatenates two strings by taking size.
 * @s1: a pointer argument of type char.
 * @s2: a pointer argument of type char.
 * @n: an integer argument.
 * Return: the concatenated strings pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int size1 = 0, size2 = 0, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[size1] != '\0')
{
size1++;
}

while (s2[size2] != '\0')
{
size2++;
}

if (n > size2)
{
n = size2;
p = malloc((size1 + n + 1) * sizeof(char));
}

if (p == NULL)
{
return (0);
}

for (i = 0; i < size1; i++)
{
p[i] = s1[i];
}

for (; i < (size1 + n); i++)
{
p[i] = s2[i - size1];
}
p[i] = '\0';
return (p);
}
