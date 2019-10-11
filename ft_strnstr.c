/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:03:59 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/08 09:54:56 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	int		j;
	char	*s;

	s = NULL;
	i = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (str[i] != '\0' && i < len)
	{
		if (to_find[0] == str[i])
		{
			j = 0;
			while (to_find[j] == str[i + j] && i + j < len)
			{
				s = (char*)&str[i];
				if (to_find[j + 1] == '\0')
					return (s);
				j++;
			}
		}
		i++;
	}
	return (0);
}
