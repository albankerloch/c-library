/* updated: 11/10/2019 */
/* ft_putendl_fd.c by alban kerloc'h */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
