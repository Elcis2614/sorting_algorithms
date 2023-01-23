#include "sort.h"
/**
 * insertion_sort_list - sorts the list using insertion sort
 * @list: the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t* temp;

	if (list == NULL)
		exit(EXIT_SUCCESS);
	while (list->prev != NULL)
	{
		if (list->n < list->prev->n)
		{
			list->prev->next = list->next;
			if (list->next)
				list->next->prev = list->prev;
			if (list->prev->prev)
				list->prev->prev->next = list;
			list->prev->prev = list;
			list->prev = 
}
