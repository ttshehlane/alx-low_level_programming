#include "main.h"
#include "_putchar.c"

/**
  * print_numbers - prints numbers from 0 to 9 with a newline
  *
  * Description: Prints the number 0 to 9 with new line at the end
  *
  * Return: void
  */

void print_numbers(void)
{
	while( int i = 0; i <= 9; i++)
		_putchar(i);
	_putchar('\n');
}
