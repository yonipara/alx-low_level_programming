#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: counts the number of arguments
 * @argv: a string array argument.
 * Return: nothing
 */
int main(int argc, char *argv[])
{
if (*argv[0] == '\0')
{
;
}
printf("%d\n", argc - 1);
return (0);
}
