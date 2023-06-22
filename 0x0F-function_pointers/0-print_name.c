#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer name
 * @f: a pointer to a function that takes a char pointer argument
 *
 * Description: the function take a name and a function pointer as args
 * and uses the provided function to print a name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
