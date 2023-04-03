#include "lists.h"
#include <stdio.h>

/*
 * print_listint : is used for listing the objects and properties of listint
 * *h is the node
 * Return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}
