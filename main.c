/**
 * @file main.c
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int v;
	int v2;

	v = atoi(" 100    ");
	v2 = ft_atoi(" 100    ");
	printf("La valeur avec atoi est : %d.\n", v);
	printf("La valeur avec ft_atoi est : %d.\n", v2);

	return EXIT_SUCCESS;
}
