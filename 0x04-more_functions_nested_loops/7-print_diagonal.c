#include "main.h"
#include <stdio.h>

/**
  * print_diagonal - prints a diagonal line in the terminal
  *
  * Description: Prints a diagonal line
  * @n : integer
  *
  * Return: Always 0
  */
void print_diagonal(int n)
{
	int i = 0;
	int a = 0;

	if (n < 1)
	{
		_putchar('\n');
	} else
	{
		while (i < n)
		{
			if (i >= 1)
			{
				a = 0;
				while (a < i)
				{
					_putchar(32);
					a++;
				}
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
