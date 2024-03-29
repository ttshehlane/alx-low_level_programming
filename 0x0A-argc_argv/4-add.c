#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Writes a program that adds positive numbers
 * @argc: integer
 * @argv: char
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int ic, count, val, len = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		ic = 1;
		count = 0;
		while (ic < argc)
		{
			val = 0;
			len = strlen(argv[ic]);
			while (val < len)
			{
				if (isdigit(*argv[ic] + val) == 0)
				{
					printf("Error\n");
					return (1);
				}
				val++;
			}
			count += atoi(argv[ic]);
			ic++;
		}
		printf("%d\n", count);
	}
	return (0);
}
