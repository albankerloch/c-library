/* updated: 11/10/2019 */
/* ft_lstsize_bonus.c by alban kerloc'h */

#include "libft.h"

int	ft_lstsize(t_list *begin_list)
{
	int c;

	c = 0;
	while (begin_list)
	{
		c++;
		begin_list = begin_list->next;
	}
	return (c);
}
