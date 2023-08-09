/**
 * @file ft_strrchr.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

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
