#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
/**
 * main - prints the addition of all the arguments.
 * @argc: counts the number of arguments.
 * @argv: a string array argument.
 * Return: nothing
 */
int main(int argc, char *argv[])
{

int sum, i, j, k;
if (argc < 2)
{
printf("%d\n", 0);
}

for (i = 1; i < argc; i++)
{
     for (j = 0; *argv[i] != '\0'; j++)
     {
	     if (isdigit(argv[i]) > 48 && isdigit(argv[i]) <= 57)
			     {
			     	;
				}
	else
	{
	printf("Error\n");
	return (1);
	}
	}
	}


sum = atoi(argv[1]);

for (k = 2; k < argc; k++)
{
sum = sum + atoi(argv[k]);
}
printf("%d\n", sum);
return (0);
}
