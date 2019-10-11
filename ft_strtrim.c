/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <akerloc-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:59:44 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/10 17:48:11 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isset(char s, char const *set)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(set))
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	size_t	i;
	size_t	len;
	char	*s;

	if (s1 == NULL)
		return (NULL);
	if (!(s = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (0);
	j = 0;
	while (j <= ft_strlen(s1) && ft_isset(s1[j], set))
		j++;
	len = ft_strlen(s1);
	while (len > j && ft_isset(s1[len], set))
		len--;
	i = 0;
	while (j <= len && s1[j])
	{
		s[i] = s1[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
