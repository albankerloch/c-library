/* updated: 11/10/2019 */
/* ft_isalnum.c by alban kerloc'h */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122) || (i >= 48 && i <= 57))
		return (i);
	else
		return (0);
}
