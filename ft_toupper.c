/* updated: 11/10/2019 */
/* ft_toupper.c by alban kerloc'h */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 97 && i <= 122)
		return (i - 32);
	else
		return (i);
}
