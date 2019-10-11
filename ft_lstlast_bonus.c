/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <akerloc-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:30:30 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/10 17:55:40 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *begin_list)
{
	t_list	*lt;

	lt = begin_list;
	if (lt)
	{
		while (lt->next)
			lt = lt->next;
		return (lt);
	}
	return (NULL);
}
