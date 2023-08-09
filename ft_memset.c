/**
 * @file ft_memset.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the memset function */
void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char*)str;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}
