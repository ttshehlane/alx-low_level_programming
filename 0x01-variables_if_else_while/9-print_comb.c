#include <stdlib.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main block area
 * Return: 0
 */
int main(void)
{
	int ch;

	/* print lowercase letters */
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
