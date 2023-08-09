/**
 * @file ft_lstmap_bonus.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Apply a function to all the elements of a list */
t_list	*ft_lstmap(t_list *begin_list, t_list *(*f)(void *))
{
	t_list *list;

	if (begin_list)
	{
		list = f(begin_list);
		list->next = ft_lstmap(begin_list->next, f);
		return (list);
	}
	return (NULL);
}
