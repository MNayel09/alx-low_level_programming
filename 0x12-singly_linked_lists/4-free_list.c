#include <stdlib.h>
/**
 * free_list - frees list.
 * @head: pointer to the head of the list.
 *
 * Return: =0
 */
void free_list(list_t *head)
{
	list_t *current_node = head;

	while (current_node != NULL)
	{
		list_t *next_node = current_node->next;

		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}

