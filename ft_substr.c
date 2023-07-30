/* updated: 11/10/2019 */
/* ft_substr.c by alban kerloc'h */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	dest = NULL;
	j = 0;
	if (start > ft_strlen(s))
	{
		if (!(dest = (char*)malloc(1)))
			return (dest);
	}
	else
	{
		if (!(dest = (char*)malloc(ft_strlen(s) + 1)))
			return (dest);
		i = start;
		while (s[i] != '\0' && j < len)
		{
			dest[j] = s[i];
			j++;
			i++;
		}
	}
	dest[j] = '\0';
	return (dest);
}
