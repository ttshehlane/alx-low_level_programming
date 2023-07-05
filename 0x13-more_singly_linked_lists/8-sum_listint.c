#include "lists.h"
/**
 * sum_listint - sum of all the data (n)
 * @head: head of the linked list
 * Return: sum of all numbers in the data structure
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
