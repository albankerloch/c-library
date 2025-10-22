/**
 * @file ft_memccpy.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the memccpy function */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
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
		if (p[i] == (unsigned char)c)
			return ((void*)(&p[i + 1]));
		i++;
	}
	return (NULL);
}
