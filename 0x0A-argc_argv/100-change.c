#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * main - calculates coins.
 * calculate_quarters -> calculate number of quarters.
 * calculate_dimes -> calculate number of dimes.
 * calculate_nickels -> calculate number of nickels.
 * calculate_twos -> calculate number of twos.
 * calculate_pennies -> calculate number of pennies.
 * @cents: integer argument.
 * Return: number of coins.
 */
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_twos(int cents);
int calculate_pennies(int cents);

int main(int argc, char *argv[])
{
int cents, quarters, dimes, nickels, twos, pennies, coins;
if (argc < 2 || argc > 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
quarters = calculate_quarters(cents);
cents = cents - quarters * 25;

dimes = calculate_dimes(cents);
cents = cents - dimes * 10;

nickels = calculate_nickels(cents);
cents = cents - nickels * 5;

twos = calculate_twos(cents);
cents = cents - twos * 2;

pennies = calculate_pennies(cents);
cents = cents - pennies * 1;

coins = quarters + dimes + nickels + twos + pennies;

printf("%i\n", coins);

return (0);
}

int calculate_quarters(int cents)
{
int quarters = 0;
for (quarters = 0; cents >= 25; cents -= 25)
{
quarters++;
}
return (quarters);
}

int calculate_dimes(int cents)
{
int dimes = 0;
for (dimes = 0; cents >= 10; cents -= 10)
{
dimes++;
}
return (dimes);
}

int calculate_nickels(int cents)
{
int nickels = 0;
for (nickels = 0; cents >= 5; cents -= 5)
{
nickels++;
}
return (nickels);
}

int calculate_twos(int cents)
{
int twos = 0;
for (twos = 0; twos >= 2; cents -= 2)
{
twos++;
}
return (twos);
}

int calculate_pennies(int cents)
{
int pennies = 0;
for (pennies = 0; cents >= 1; cents -= 1)
{
pennies++;
}
return (pennies);
}
