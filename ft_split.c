/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akerloc- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:20:30 by akerloc-          #+#    #+#             */
/*   Updated: 2019/10/11 14:24:16 by akerloc-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_next_sep(char *str, char to_find)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (to_find == str[i])
			return (i);
		i++;
	}
	return (-1);
}

static char		*ft_strndup(char *src, int j)
{
	char	*s;
	int		i;

	s = malloc(sizeof(*s) * (ft_strlen(src) + 1));
	i = 0;
	while (i < j)
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

static int		ft_count(char *str, char charset)
{
	size_t	i;
	int		k;
	int		j;

	i = 0;
	k = 0;
	while (i < ft_strlen(str))
	{
		j = ft_next_sep(&str[i], charset);
		if (j > 0)
			k++;
		else if (j == -1 && str[i])
		{
			j = 1;
			k++;
			break ;
		}
		i = i + j + 1;
	}
	return (k);
}

char			**ft_split(char const *st, char charset)
{
	size_t	i;
	int		t;
	char	**s;
	char	*str;

	str = (char*)st;
	if (!(s = (char**)malloc(sizeof(char*) * (ft_count(str, charset) + 1))))
		return (0);
	i = 0;
	t = 0;
	while (i < ft_strlen(str))
	{
		if (ft_next_sep(&str[i], charset) > 0)
			s[t++] = ft_strndup(&str[i], ft_next_sep(&str[i], charset));
		else if (ft_next_sep(&str[i], charset) == -1)
		{
			s[t] = ft_strndup(&str[i], ft_strlen(&str[i]));
			t = t + 1;
			break ;
		}
		i = i + ft_next_sep(&str[i], charset) + 1;
	}
	s[ft_count(str, charset)] = 0;
	return (s);
}
