/**
 * @file ft_lstadd_front_bonus.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief  Add an element at the front of a list  */
void	ft_lstadd_front(t_list **begin_list, t_list *lt)
{
	if (begin_list)
	{
		if (lt)
		{
			if (*begin_list)
			{
				lt->next = *begin_list;
				*begin_list = lt;
			}
			else
				*begin_list = lt;
		}
		else
			*begin_list = NULL;
	}
}
