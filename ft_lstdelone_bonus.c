/**
 * @file ft_lstdelone_bonus.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Delete one element of a list */
void	ft_lstdelone(t_list *lt, void (*del)(void *))
{
	if (lt)
	{
		del(lt->content);
		free(lt);
		lt = NULL;
	}
}
