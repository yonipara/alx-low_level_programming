#include "main.h"

/**
 * rev_string -> reverses a string
 * @s: input string
 * Return:nothing
 */
void rev_string(char *s)
{
char rev = s[0];
int x = 0;
int i;

while (s[x] != '\0')
{
x++;
}
for (i = 0; i < x; i++)
{
counter--;
rev = s[i];
s[i] = s[x];
s[x] = rev;
}
}
