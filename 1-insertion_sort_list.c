#include "sort.h"
/**
 * swapnode - swaps in a doubly linked list
 * @previous: prev node of current
 * @current: the current node
 * @list: the head of the list
 * Return: None
 */
void swapnode(listint_t *current, listint_t *previous, listint_t **list)
{
	listint_t *tmp;

	tmp = previous->prev;
	if (tmp)
		tmp->next = current;
	else
		*list = current;

	current->prev = tmp;

	previous->prev = current;
	previous->next = current->next;
	current->next = previous;
	if (previous->next)
		previous->next->prev = previous;
	else
		previous->next = NULL;
}

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order using
 * the insertion sort algorithm
 * @list: the head of the list
 * Return: None
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;

	if (!list || !*list || !(*list)->next)
		return;

	temp = (*list)->next;
	while (temp)
	{
		while (temp->prev && temp->prev->n > temp->n)
		{
			swapnode(temp, temp->prev, list);
			print_list(*list);
		}
		temp = temp->next;
	}
}
