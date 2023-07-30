/* updated: 11/10/2019 */
/* ft_isalpha.c by alban kerloc'h */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
		return (i);
	else
		return (0);
}
