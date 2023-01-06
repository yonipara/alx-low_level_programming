#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two numbers.
 * @argc: counts the number of arguments.
 * @argv: a string array argument.
 * Return: nothing
 */
int main(int argc, char *argv[])
{
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
}

