/**
 * @file ft_isascii.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the isascii function */
int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	else
		return (0);
}
