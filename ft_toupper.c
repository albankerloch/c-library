/**
 * @file ft_toupper.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 97 && i <= 122)
		return (i - 32);
	else
		return (i);
}
