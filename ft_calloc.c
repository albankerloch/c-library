/* updated: 11/10/2019 */
/* ft_calloc.c by alban kerloc'h */

#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void *p;

	p = NULL;
	if (!(p = (void*)malloc(n * s)))
		return (p);
	ft_bzero(p, n * s);
	return (p);
}
