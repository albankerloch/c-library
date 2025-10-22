/**
 * @file ft_memcpy.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the memcpy function */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*p2;

	p = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		p[i] = p2[i];
		i++;
	}
	return (p);
}
