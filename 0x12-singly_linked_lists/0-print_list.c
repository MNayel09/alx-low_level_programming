#include "lists.h"
#include<stdio.h>
/**
 * print_list - prints all the elements of list_t list
 * @h: a pointer to the nodes
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp = h;
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
