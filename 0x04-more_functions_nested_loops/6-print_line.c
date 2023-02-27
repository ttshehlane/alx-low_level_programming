#include "main.h"
#include <stdio.h>

/**
  * print_line - prints a straight line in the terminal
  *
  * Description: Prints the shortest distance between two points
  * @n : integer
  *
  * Return: Always 0
  */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
