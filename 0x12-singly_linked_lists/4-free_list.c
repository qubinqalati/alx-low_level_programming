#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees mem alloacated for a list
 * @head: ptr to 1st node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}