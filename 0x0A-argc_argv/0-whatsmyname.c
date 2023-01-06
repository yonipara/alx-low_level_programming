#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program.
 * @argc: counts the number of arguments
 * @argv: a string array argument.
 * Return: nothing
 */
int mynameis(int argc, char *argv[])
{
if (argc < 1)
{
;
}
printf("%s\n", argv[0]);
return (0);
}
