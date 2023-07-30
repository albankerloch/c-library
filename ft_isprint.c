/* updated: 11/10/2019 */
/* ft_isprint.c by alban kerloc'h */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i > 31 && i < 127)
		return (i);
	else
		return (0);
}
