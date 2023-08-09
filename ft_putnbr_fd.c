/**
 * @file ft_putnbr_fd.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Calculate a power of ten */
static int	ft_puiss_dix(int n)
{
	int result;

	if (n == 0)
	{
		result = 1;
	}
	else
	{
		result = 10 * ft_puiss_dix(n - 1);
	}
	return (result);
}

/** @brief Write a number (recursively) */
static void	ft_rec(int a, int n, int fd)
{
	char	c;
	int		i;
	int		b;

	i = ft_puiss_dix(n);
	c = a / i + 48;
	write(fd, &c, 1);
	if (n != 0)
	{
		b = a % i;
		ft_rec(b, n - 1, fd);
	}
}

/** @brief Replication of the putnbr_fd function */
void		ft_putnbr_fd(int a, int fd)
{
	int n;
	int b;

	if (a == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (a < 0)
		{
			write(fd, "-", 1);
			a = -a;
		}
		b = a;
		n = 0;
		while ((b % 10) != b)
		{
			b = b / 10;
			n++;
		}
		ft_rec(a, n, fd);
	}
}
