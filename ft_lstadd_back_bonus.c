/**
 * @file ft_lstadd_back_bonus.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Add an element at the back of a list */
void	ft_lstadd_back(t_list **begin_list, t_list *lt)
{
	t_list *l;

	if (begin_list)
	{
		if (*begin_list)
		{
			l = *begin_list;
			while (l->next)
				l = l->next;
			if (lt)
				l->next = lt;
		}
		else
			*begin_list = lt;
	}
}
