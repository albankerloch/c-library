/* updated: 11/10/2019 */
/* ft_bzero.c by alban kerloc'h */

#include "libft.h"

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
