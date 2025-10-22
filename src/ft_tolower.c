/**
 * @file ft_tolower.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 65 && i <= 90)
		return (i + 32);
	else
		return (i);
}
