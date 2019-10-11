/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:17:49 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/08 10:28:56 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s;

	i = ft_strlen(str);
	s = (char*)str;
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return (&s[i]);
		i--;
	}
	return (0);
}
