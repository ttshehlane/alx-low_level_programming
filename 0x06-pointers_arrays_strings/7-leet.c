#include "main.h"

/**
 * leet - encodes a string
 * @str: the string that will encode
 *
 * Return: value of encoded string
 */
char *leet(char *str)
{
	char *alpha, *rot13;
	int count, count2;

	alpha = "aAeEoOtTlL";
	rot13 = "4433007711";

	count = 0;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (alpha[count2] != '\0')
		{
			if (str[count] == alpha[count2])
			{
				str[count] = rot13[count2];
			}
			count2++;
		}
		count++;
	}
	return (str);
}
