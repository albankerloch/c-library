/**
 * @file ft_strlcat.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the strlcat function */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	n;

	n = (ft_strlen(dest) < size) ? ft_strlen(dest) : size;
	n = n + ft_strlen(src);
	j = 0;
	i = ft_strlen(dest);
	while (j + i + 1 < size && src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (n);
}
