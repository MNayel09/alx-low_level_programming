#include "lists.h"
#include<string.h>
#include<stdlib.h>
/**
 * _strlen - find the string length
 * @str: string
 *
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
		return (len);
}
/**
 * add_node_end - adds a new node to the end of list_t list.
 * @head: the head of the list.
 * @str: the str to duplicate.
 *
 * Return: the address of the new element or NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}

