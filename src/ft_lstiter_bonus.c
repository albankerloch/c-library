/**
 * @file ft_lstiter_bonus.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Apply a function to all the elements of a list */
void	ft_lstiter(t_list *begin_list, void (*f)(void *))
{
	t_list *list;

	if (begin_list)
	{
		list = begin_list;
		while (list)
		{
			f(list);
			list = list->next;
		}
	}
}
