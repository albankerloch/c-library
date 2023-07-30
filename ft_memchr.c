/* updated: 11/10/2019 */
/* ft_memchr.c by alban kerloc'h */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char*)str;
	while (n > 0)
	{
		if (s[i] != (unsigned char)c)
			i++;
		else
			return (&s[i]);
		n--;
	}
	return (NULL);
}
