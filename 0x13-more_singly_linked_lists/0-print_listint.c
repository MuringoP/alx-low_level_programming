#include "lists.h"

/**
 * print_listint - prints all the elements on the list
 * @j: Pointer to the head of the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *j)
{
	size_t num = 0;

	while (j)
	{
		printf("%d\n", j->n);
		num++;
		j = j->next;
	}

	return (num);
}
