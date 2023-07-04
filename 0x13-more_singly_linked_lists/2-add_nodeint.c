#include "lists.h"

/**
 * add_nodeint - adds a new node to a list
 * @head: the first node in the list
 * @n: value of a new node
 * Return: a pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
