#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - writes a program that prints the number of arguments passed into it
 * @argc: integer
 * @argv: char
 * Return: integer
 */
int main(int argc, char *argv[])
{
	(void) *argv;/* silence warning as argv is not used */
	printf("%d\n", (argc - 1));

	return (0);
}
