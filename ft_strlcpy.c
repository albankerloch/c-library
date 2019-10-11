/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 19:30:22 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/10 13:45:26 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			n;

	n = (unsigned)ft_strlen(src);
	i = 0;
	if (src[0] == '\0')
		dest[0] = '\0';
	else if (size > 0)
	{
		while (i < size - 1)
		{
			*dest++ = *src;
			if (*src != '\0')
				src++;
			i++;
		}
		*dest = ('\0');
	}
	return (n);
}
