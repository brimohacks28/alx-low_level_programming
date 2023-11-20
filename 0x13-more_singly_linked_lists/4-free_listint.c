#include "lists.h"

/**
 * free_listint - Frees lists
 * @head: Pointer to a structure
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

