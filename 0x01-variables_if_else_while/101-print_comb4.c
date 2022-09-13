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
	int count2 = '0';

	/* print lowercase letters */
	for (ch = '0'; ch < '8'; ch++)
	{
		count = ch + 1;
		while (count < '9')
		{
			count2 = count + 1;
			while (count2 <= '9')
			{
				putchar(ch);
				putchar(count);
				putchar(count2);
				if (ch < '7')
				{
					putchar(',');
					putchar(' ');
				}
				count2++;
			}
			count++;
		}
	}
	putchar('\n');
	return (0);
}
