/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <akerloc-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:28:51 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/10 17:54:37 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
