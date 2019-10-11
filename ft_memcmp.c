/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:41:31 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/08 13:47:11 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1
	&& (unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	if (n > 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}
