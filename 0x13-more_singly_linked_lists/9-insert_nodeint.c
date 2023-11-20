#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	while (*head && idx)
	{
		if (!tmp)
			return (NULL);
		if (i == idx - 1)
			break;
		tmp = tmp->next;
		++i;
	}
	new->n = n;
	if (idx)
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	else
	{
		new->next = tmp;
		*head = new;
	}
	return (new);
}
