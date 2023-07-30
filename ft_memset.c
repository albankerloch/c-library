/* updated: 11/10/2019 */
/* ft_memset.c by alban kerloc'h */

#include "libft.h"

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
