/**
 * @file ft_putstr_fd.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the putstr_fd function */
void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
