/* updated: 11/10/2019 */
/* ft_strlcpy.c by alban kerloc'h */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			n;

	n = (unsigned)ft_strlen(src);
	i = 0;
	if (src[0] == '\0')
		dest[0] = '\0';
	else if (size > 0)
	{
		while (i < size - 1)
		{
			*dest++ = *src;
			if (*src != '\0')
				src++;
			i++;
		}
		*dest = ('\0');
	}
	return (n);
}
