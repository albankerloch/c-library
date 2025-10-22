/**
 * @file ft_strchr.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the strchr function */
char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;

	i = 0;
	s = (char*)str;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == (unsigned char)c)
		return (&s[i]);
	return (NULL);
}
