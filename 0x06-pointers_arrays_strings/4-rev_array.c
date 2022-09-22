#include "main.h"
#include <stdio.h>

/**
 * reverse_array - funtion to reverse the input text
 * @a: array of text to be reversed
 * @n: the length of the array
 *
 * Return: Always 0 (success)
 */
void reverse_array(int *a, int n)
{
	int temp;
	int x, i;

	for (i = 0, x = n - 1; i <= x ; i++, x--)
	{
		temp = a[x];
		a[x] = a[i];
		a[i] = temp;
	}
}
