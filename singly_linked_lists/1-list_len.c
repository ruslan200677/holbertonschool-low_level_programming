#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - main
 * @h: clone of our  linkedlist
 * Return: length
 */

size_t list_len(const list_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
