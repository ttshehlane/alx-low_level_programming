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

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		while (i < n)
		{
			_putchar('92');
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
}
