/* updated: 11/10/2019 */
/* ft_strlen.c by alban kerloc'h */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
