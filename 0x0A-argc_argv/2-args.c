#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: counts the number of arguments
 * @argv: a string array argument.
 * Return: nothing
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
