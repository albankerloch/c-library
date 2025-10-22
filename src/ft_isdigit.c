/**
 * @file ft_isdigit.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the isdigit function */
int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (i);
	else
		return (0);
}
