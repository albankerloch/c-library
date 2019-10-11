/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <akerloc-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:29:49 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/11 14:45:53 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
