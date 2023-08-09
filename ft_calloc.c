/**
 * @file ft_calloc.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the calloc function */
void	*ft_calloc(size_t n, size_t s)
{
	void *p;

	p = NULL;
	if (!(p = (void*)malloc(n * s)))
		return (p);
	ft_bzero(p, n * s);
	return (p);
}
