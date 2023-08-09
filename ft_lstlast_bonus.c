/**
 * @file ft_lstlast_bonus.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Get the last element of a list */
t_list	*ft_lstlast(t_list *begin_list)
{
	t_list	*lt;

	lt = begin_list;
	if (lt)
	{
		while (lt->next)
			lt = lt->next;
		return (lt);
	}
	return (NULL);
}
