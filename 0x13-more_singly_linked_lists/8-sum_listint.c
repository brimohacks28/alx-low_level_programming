#include "lists.h"

/**
 * sum_listint - Adds all data of linked list
 * @head: Pointer to a struct
 * Return: Sum of all data (n) of a linked list Sucess
 * 0 if empty list
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
