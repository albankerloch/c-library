/* updated: 11/10/2019 */
/* ft_memcmp.c by alban kerloc'h */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1
	&& (unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	if (n > 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	else
		return (0);
}
