/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:48:21 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/08 14:01:07 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*p2;

	p = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	i = 0;
	if (p > p2)
	{
		while (i < n)
		{
			p[n - 1] = p2[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			p[i] = p2[i];
			i++;
		}
	}
	return (p);
}
