/* updated: 11/10/2019 */
/* ft_putstr_fd.c by alban kerloc'h */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
