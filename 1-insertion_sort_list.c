#include "sort.h"
/**
 * insertion_sort_list - sorts the list using insertion sort
 * @list: the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head;
	listint_t *ref = *list;

	if (list != NULL && *list != NULL)
	{
		while ((*list) != NULL)
		{
			head = *list;
			while (head->prev != NULL && head->n < head->prev->n)
			{
				if (head->next)
					head->next->prev = head->prev;
				if (head->prev->prev)
					head->prev->prev->next = head;
				head->prev->next = head->next;
				head->next = head->prev;
				head->prev = head->prev->prev;
				head->next->prev = head;
				if (!head->prev)
					ref = head;
				print_list(ref);
				/*printf("%d\n", (*list)->n);*/
			}
			*list = (*list)->next;
		}
		*list = ref;
	}
}
