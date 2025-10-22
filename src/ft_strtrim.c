/**
 * @file ft_strtrim.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

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
