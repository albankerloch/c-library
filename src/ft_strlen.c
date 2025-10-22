/**
 * @file ft_strlen.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the strlen function */
size_t	ft_strlen(const char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
