/* updated: 11/10/2019 */
/* ft_isascii.c by alban kerloc'h */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	else
		return (0);
}
