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
	int count3 = '0';


	/* print lowercase letters */
	for (ch = '0'; ch <= '9'; ch++)
	{
		count = ch;
		while (count < '9')
		{
			count2 = count;
			while (count2 <= '9')
			{
				count3 = '1';
				while (count3 <= '9')
				{
					putchar(ch);
					putchar(count);
					putchar(' ');
					putchar(count2);
					putchar(count3);
					if (ch < '9')
					{
						putchar(',');
						putchar(' ');
					}
					count3++;
				}
				count2++;
			}
			count++;
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
