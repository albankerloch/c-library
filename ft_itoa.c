/**
 * @file ft_itoa.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the strncat function */
static char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/** @brief Count the number of digits of a number */
static int		ft_count(int nbr)
{
	int		j;
	int		t;

	j = 1;
	t = nbr;
	if (nbr < 0)
	{
		t = -t;
		j++;
	}
	while (t > 10)
	{
		t = t / 10;
		j++;
	}
	return (j);
}

/** @brief Affect a number to a string */
static void		ft_wbase(long n, char **s)
{
	long	c;
	long	d;
	char	e;

	if (n >= 10)
	{
		c = n / 10;
		d = n % 10;
		ft_wbase(c, s);
		e = d + 48;
		*s = ft_strncat(*s, &e, 1);
	}
	else
	{
		e = n + 48;
		*s = ft_strncat(*s, &e, 1);
	}
}

/** @brief Replication of the itoa function */
char			*ft_itoa(int nbr)
{
	long	t;
	char	*s;

	s = NULL;
	if (!(s = (char*)malloc(sizeof(char) * (ft_count(nbr) + 1))))
		return (s);
	t = nbr;
	if (nbr < 0)
	{
		t = -t;
		s[0] = '-';
		s[1] = '\0';
	}
	else
		s[0] = '\0';
	ft_wbase(t, &s);
	return (s);
}
