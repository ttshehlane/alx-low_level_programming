#include "main.h"
#include <stdio.h>

/**
  * print_numbers - prints numbers from 0 to 9 with a newline
  *
  * Description: Prints the number 0 to 9 with new line at the end
  *
  * Return: Always 0
  */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
