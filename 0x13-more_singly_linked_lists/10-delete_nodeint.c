#include "lists.h"
/**
 * delete_nodeint_at_index - adds a new node at a given position
 * @head: head pointer pointer
 * @index: index where the node is to be deleted
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	previous = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);
	return (1);
}
