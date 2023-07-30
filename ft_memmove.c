/* updated: 11/10/2019 */
/* ft_memmove.c by alban kerloc'h */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*p2;

	p = (unsigned char*)dest;
	p2 = (unsigned char*)src;
	i = 0;
	if (p > p2)
	{
		while (i < n)
		{
			p[n - 1] = p2[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			p[i] = p2[i];
			i++;
		}
	}
	return (p);
}
