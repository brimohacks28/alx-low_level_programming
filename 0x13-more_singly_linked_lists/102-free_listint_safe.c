#include "lists.h"


size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *tmp;

	while (*h && *h > (*h)->next)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		++c;
	}
	if (*h)
	{
		free(*h);
		++c;
	}
	*h = NULL;
	return (c);
}

