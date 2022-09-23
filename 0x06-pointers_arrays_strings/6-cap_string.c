#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: Takes the string that will be manupilated
 *
 * Return: Always 0 (success)
 */
char *cap_string(char *str)
{
	int i, j;
	int delt = 'a' - 'A';
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	for (i = 0; str[i] != '\0'; i++)
	{
		/*checking if the first letter is lowercase alphabet*/
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= delt;
			continue; /*carry on with the loop*/
		}
		for (j = 0; c[j] != '\0'; j++) 
		{/*checking for word separtors: space, tabulation, new line, ,, ;, ., !, ?, \", (, ), {, and }*/
			if (str[i] == c[j])
			{/*if the above are found we go ahead to check the next character*/
				i++;
				/*Check if this character is lower case and if yes we go ahead and convert it to uppercase*/
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= delt;
					break; /* break the loop*/
				}
			}
			else
			{
				/*now am checking if our string is uppercase and will need to convert it to lower case*/
				if(str[i] >= 'A' && str[i] <= 'Z')
					str[i] += delt;
				break;
			}
		}	
	}
	return (str);
}
