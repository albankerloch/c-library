/**
 * @file ft_split.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Find the next separator */
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

/** @brief Replication of the strndup function */
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

/** @brief Length counter function */
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

/** @brief Replication of the split function */
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
