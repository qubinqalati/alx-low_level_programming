#include "lists.h"

/**
 * sum_listint - lorem
 * @head: lorem
 *
 * Return: ...
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
