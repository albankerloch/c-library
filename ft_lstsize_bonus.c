/**
 * @file ft_lstsize_bonus.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Get the size of a list */
int	ft_lstsize(t_list *begin_list)
{
	int c;

	c = 0;
	while (begin_list)
	{
		c++;
		begin_list = begin_list->next;
	}
	return (c);
}
