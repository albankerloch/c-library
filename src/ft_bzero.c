/**
 * @file ft_bzero.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the bzero function */
void	*ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char*)str;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}
