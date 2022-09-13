#include <stdlib.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  * main - main block area
 *   * Return: 0
 */
int main(void)
{
	int ch;
	int count = '0';

	/* print lowercase letters */
	for (ch = '0'; ch < '9'; ch++)
	{
		count = ch + 1;
		while (count <= '9')
		{
			putchar(ch);
			putchar(count);
			if (ch < '8')
			{
				putchar(',');
				putchar(' ');
			}
			count++;
		}
	}
	putchar('\n');
	return (0);
}
