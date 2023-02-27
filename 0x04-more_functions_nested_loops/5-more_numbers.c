#include "main.h"
#include <stdio.h>

/**
  * more_numbers - prints numbers from 0 to 14 with a newline
  *
  * Description: Prints the number 0 to 14 with new line at the end
  *
  * Return: Always 0
  */

void more_numbers(void)
{
	int i = 0;
	int a = 0;

	while (a <10)
	{
		while (i <= 14)
		{
			_putchar('0' + i);
			i++;
		}
		_putchar('\n');
	}
}
