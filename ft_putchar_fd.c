/**
 * @file ft_putchar_fd.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the putchar_fd function */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
