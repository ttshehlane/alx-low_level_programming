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
	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
