#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: integer
 * @argv: char
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
