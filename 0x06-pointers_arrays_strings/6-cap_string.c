#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: Takes the string that will be manupilated
 *
 * Return: Always 0 (success)
 */
char *cap_string(char *str)
{
	int i;
	int delt = 'a' - 'A';

	for (i = 0; str[i] != '\0'; i++)
	{
		/*checking if the first letter is lowercase alphabet*/
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= delt;
			continue; /*carry on with the loop*/
		}
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || 
		str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')) 
			/*checking for word separtors: space, tabulation, new line, ,, ;, ., !, ?, \", (, ), {, and }*/
		{
			/*if the above are found we go ahead to check the next character*/
			i++;
			/*Check if this character is lower case and if yes we go ahead and convert it to uppercase*/
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= delt;
				continue; /* carry on with the loop*/
			}
		}
		else
		{
			/*now am converting all the uppercase character that do not meet the above requiments to lowercase*/
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += delt;
		}		
	}
	return (str);
}
