/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <akerloc-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:43:37 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/11 15:32:00 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
