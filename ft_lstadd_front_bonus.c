/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <akerloc-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:22:48 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/11 15:51:17 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
