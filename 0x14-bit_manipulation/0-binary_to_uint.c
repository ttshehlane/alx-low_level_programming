#include "main.h"
/**
 * _strlen - calculates size of a string excluding the null term
 * @str: takes in a char pointer
 * Return: string length as unsigned int or 0
*/
unsigned int _strlen(const char *str)
{
	unsigned int n = 0;

	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}
/**
 * binary_to_uint - converst binary to int
 * @b: string of base2
 * Return: 0 on failure and returns a none zero val on success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, sum = 0;

	if (b == NULL)
		return (sum);
	n = _strlen(b) - 1;
	while (*b != '\0')
	{
		if (*b == '1')
		{
			sum += (1 << n);
		}
		else if (*b == '0')
			sum += 0;
		else
			return (0);
		b++;
		n--;
	}
	return (sum);
}
