#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - returns the num of elements in a linked list
 * @h: name of list
 *
 * Return: num of nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}