/* updated: 11/10/2019 */
/* ft_isdigit.c by alban kerloc'h */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (i);
	else
		return (0);
}
