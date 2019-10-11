/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:16:00 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/08 12:15:30 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char*)str;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}
