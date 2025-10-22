/**
 * @file ft_isprint.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the isprint function */
int	ft_isprint(int i)
{
	if (i > 31 && i < 127)
		return (i);
	else
		return (0);
}
