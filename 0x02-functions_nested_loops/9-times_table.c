#include "main.h"
/**
 * times_table -> print a nines time table
 * Return: nothing just prints
 */
void times_table(void)
{
int i = 0;
int j = 0;
int x;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		x = j * i;
		if (j < 9)
		{
			if (x < 10)
			{
				_putchar(x + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{	
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		else 
		{
			if (x < 10)
			{
				 _putchar(x + '0');
			}
			else
			{
				_putchar((x / 10) + '0');
                                _putchar((x % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
}
