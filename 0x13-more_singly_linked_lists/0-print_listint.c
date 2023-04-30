#include "lists.h"
#include<stdio.h>
/**
 * print_listint - prints all the elements of listint_t list
 * @h: a pointer to the nodes
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t*tmp = h;
	size_t count = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
