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
 * add_node_end - adds a new node at the end
 * @head: first node of the list
 * @str: string to be added
 * Return: pointer of a new address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_list, *current;

	last_list = (list_t *)malloc(sizeof(list_t));
	if (last_list == NULL)
		return (NULL);
	last_list->str = strdup(str);
	last_list->len = _strlen(str);
	last_list->next = NULL;
	if (*head == NULL)
		*head = last_list;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = last_list;
	}
	return (last_list);
}
