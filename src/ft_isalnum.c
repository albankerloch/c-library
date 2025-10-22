/**
 * @file ft_isalnum.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

/** @brief Replication of the isalnum function */
int	ft_isalnum(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122) || (i >= 48 && i <= 57))
		return (i);
	else
		return (0);
}
