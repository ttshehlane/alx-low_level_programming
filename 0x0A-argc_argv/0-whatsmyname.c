#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - writes a program that prints its name, followed by a new line
 * @argc: integer
 * @argv: char
 * Return: integer
 */
int main(int argc, char *argv[])
{
	(void) argc;/* silence warning as argc is not used */
	printf("%s\n", argv[0]);

	return (0);
}
