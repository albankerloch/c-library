/* updated: 11/10/2019 */
/* ft_tolower.c by alban kerloc'h */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 65 && i <= 90)
		return (i + 32);
	else
		return (i);
}
