/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:04:40 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/10 13:22:48 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*p2;

	p = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		p[i] = p2[i];
		if (p[i] == (unsigned char)c)
			return ((void*)(&p[i + 1]));
		i++;
	}
	return (NULL);
}
