/**
 * @file ft_strdup.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the isalnum function */
static char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/** @brief Replication of the strdup function */
char		*ft_strdup(const char *src)
{
	char *s;

	s = NULL;
	if (!(s = (char*)malloc(ft_strlen(src) + 1)))
		return (s);
	ft_strcpy(s, src);
	return (s);
}
