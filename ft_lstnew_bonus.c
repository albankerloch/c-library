/**
 * @file ft_lstnew_bonus.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Create an new node */
t_list	*ft_lstnew(void *content)
{
	t_list	*lt;

	lt = NULL;
	if (!(lt = (t_list*)malloc(sizeof(t_list))))
		return (lt);
	if (content)
		lt->content = content;
	else
		lt->content = NULL;
	lt->next = NULL;
	return (lt);
}
