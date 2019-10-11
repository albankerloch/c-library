/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <akerloc-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:18:08 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/10 17:55:22 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
