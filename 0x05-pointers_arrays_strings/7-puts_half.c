#include "main.h"

/**
 * puts_half -> prints half of a string
 * @str: input
 * Return: nothing
 */
void puts_half(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
	;
}
if (i % 2 == 0)
{
i = i / 2;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
else
{
i = (i - 1) / 2;
i++;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
_putchar('\n');
}
