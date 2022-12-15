#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i != 100)
{
if ((i % 15) == 0)
{
printf("FizzBuzz");
printf("%c", 32);
}
else if ((i % 5) == 0)
{
printf("Buzz");
printf("%c", 32);
}
else if ((i % 3) == 0)
{
printf("Fizz");
printf("%c", 32);
}
else
{
printf("%d", i);
printf("%c", 32);
}
}
else
{
printf("Buzz");
printf("\n");
}
}
return (0);
}

