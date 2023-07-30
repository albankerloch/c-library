/* updated: 11/10/2019 */
/* ft_memcpy.c by alban kerloc'h */

#include "libft.h"

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
