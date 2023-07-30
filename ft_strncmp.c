/* updated: 11/10/2019 */
/* ft_strncmp.c by alban kerloc'h */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
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
