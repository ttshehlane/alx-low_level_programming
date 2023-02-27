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

	while (a < 10)
	{
		while (i <= 14)
		{
			if (i > 9)
				_putchar('0' + 1);
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		i = 0;
		a++;
	}
}
