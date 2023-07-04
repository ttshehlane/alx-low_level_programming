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

	if (head == NULL)
		return (num);
	current = *head;
	num = current->n;
	*head = current->next;
	free(current);
	return (num);
}
