/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:21:46 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/10 19:11:35 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char*)str;
	while (n > 0)
	{
		if (s[i] != (unsigned char)c)
			i++;
		else
			return (&s[i]);
		n--;
	}
	return (NULL);
}
