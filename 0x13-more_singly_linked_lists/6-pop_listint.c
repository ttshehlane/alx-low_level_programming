#include "lists.h"

/**
 * pop_listint - frees the firt node in a list
 * @head: head of the list
 * Return: number
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int num = 0;

	if (*head == NULL)
		return (0);
	current = *head;
	num = current->n;
	if (current->next == NULL)
	{
		free(current);
		*head = NULL;
		return (num);
	}
	*head = current->next;
	free(current);
	return (num);
}
