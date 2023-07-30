/* updated: 11/10/2019 */
/* ft_putchar_fd.c by alban kerloc'h */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
