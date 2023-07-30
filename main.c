/* updated: 30/07/2023 */
/* main.c by alban kerloc'h */

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
