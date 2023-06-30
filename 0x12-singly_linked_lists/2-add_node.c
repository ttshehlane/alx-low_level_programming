#include "lists.h"
#include <string.h>

/**
 * _strlen - calculates the string length
 * @str: the string to be calculated
 * Return: returns an integer
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list
 * @head: the start of the current list
 * @str: name
 * Return: a pointer to the start of a new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *current_list;

	current_list = (list_t *)malloc(sizeof(list_t));
	if (current_list == NULL)
		return (NULL);
	current_list->str = strdup(str);
	current_list->len = _strlen(str);
	current_list->next = *head;
	*head = current_list;
	return (*head);
}
