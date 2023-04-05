#include "main.h"
#include <stdio.h>

/**
  * print_square - prints a square in the terminal
  *
  * Description: Prints a square in the terminal
  * @size : integer
  *
  * Return: Always 0
  */
void print_square(int size)
{
	int i = 0;
	int a = 0;

	if (size < 1)
	{
		_putchar('\n');
	} else
	{
		while (i < size)
		{
			a = 0;
			while (a < size)
			{
				_putchar(35);
				a++;
			}
			_putchar('\n');
			i++;
		}
	}
}
