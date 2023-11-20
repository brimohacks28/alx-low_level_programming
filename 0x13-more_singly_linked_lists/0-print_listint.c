#include "lists.h"

/**
 * print_listint - prints all elements of a list
 *
 * @h: pointer to a list
 *
 * Return: Number of nodes is sucess
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		++i;
	}
	return (i);
}
