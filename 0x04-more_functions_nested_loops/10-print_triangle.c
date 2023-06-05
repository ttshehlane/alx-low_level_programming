#include "main.h"
#include <stdio.h>

/**
  * print_triangle - prints a triangle in the terminal
  *
  * Description: Prints a triangle in the terminal
  * @size : integer
  *
  * Return: Always 0
  */
void print_triangle(int size)
{
	int i = 1;
	int a = 1;

	if (size < 1)
	{
		_putchar('\n');
	} else
	{
		while (i <= size)
		{
			a = 1;
			while (a <= size)
			{
				if (a <= (size - i))
				{
					_putchar(32);
				} else
				{
					_putchar(35);
				}
				a++;
			}
			_putchar('\n');
			i++;
		}
	}
}
