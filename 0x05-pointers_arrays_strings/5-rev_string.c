#include "main.h"

/**
 * rev_string -> prints a string in reverse
 * @s: string argument
 * Return: nothing
 */
void rev_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
