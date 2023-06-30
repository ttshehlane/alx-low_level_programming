#include "lists.h"

/**
 * free_list - free a list
 * @head: the start of the list
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *current;

	while(head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
