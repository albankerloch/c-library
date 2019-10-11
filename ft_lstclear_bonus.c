/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <akerloc-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:35:07 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/11 15:44:35 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **begin_list, void (*del)(void *))
{
	t_list *lt;
	t_list *list;

	if (begin_list)
	{
		lt = *begin_list;
		while (lt)
		{
			list = lt->next;
			del(lt->content);
			free(lt);
			lt = list;
		}
		*begin_list = NULL;
	}
}
