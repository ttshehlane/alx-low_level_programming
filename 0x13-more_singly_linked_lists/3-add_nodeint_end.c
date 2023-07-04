#include "lists.h"

/**
 * add_nodeint_end - adds a new node to a list
 * @head: the first node in the list
 * @n: value of a new node
 * Return: a pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *cur_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		cur_node = *head;
		while (cur_node->next)
			cur_node = cur_node->next;
		cur_node->next = new_node;
	}

	return (new_node);
}
