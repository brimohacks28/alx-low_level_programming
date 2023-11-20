#include "lists.h"

/**
 * pop_listint - Deletes Node head of linked list
 * @head: Pointer to a struct
 *
 * Return: n represents data of node of Head
 * 0 returned if linked list is Empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num = 0;

	if (*head)
	{
		num = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
		return (num);
}
