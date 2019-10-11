/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <akerloc-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:39:51 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/11 15:45:45 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
