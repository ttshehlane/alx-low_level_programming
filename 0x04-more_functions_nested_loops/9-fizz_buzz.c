#include <stdio.h>

/**
  * main - prints a fizz buzz test
  *
  * Description: Prints a fizz buzzz test values
  *
  * Return: Always 0
  */
int main(void)
{
	int i = 1;
	
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf ("%s ", "FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf ("%s ","Fizz");
		} else if (i % 5 == 0)
		{
			printf ("%s ","Buzz");
		} else
		{
			printf ("%i ",i);
		}
		i++;
	}
	printf ("\n");
	return (0);
}
