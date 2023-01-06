#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the addition of all the arguments.
 * @argc: counts the number of arguments.
 * @argv: a string array argument.
 * Return: nothing
 */
int main(int argc, char *argv[])
{

int sum, i;
if (argc < 2)
{
printf("%d\n", 0);
}

sum = atoi(argv[1]);

for (i = 2; i < argc; i++)
{
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
