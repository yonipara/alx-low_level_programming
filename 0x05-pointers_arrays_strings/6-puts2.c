#include "main.h"

/**
 * puts2 - prints one character
 * @str: input
 * Return: nothing
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
