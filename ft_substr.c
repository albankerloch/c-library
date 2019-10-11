/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <akerloc-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:48:25 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/10 17:34:47 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	dest = NULL;
	j = 0;
	if (start > ft_strlen(s))
	{
		if (!(dest = (char*)malloc(1)))
			return (dest);
	}
	else
	{
		if (!(dest = (char*)malloc(ft_strlen(s) + 1)))
			return (dest);
		i = start;
		while (s[i] != '\0' && j < len)
		{
			dest[j] = s[i];
			j++;
			i++;
		}
	}
	dest[j] = '\0';
	return (dest);
}
