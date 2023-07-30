/* updated: 11/10/2019 */
/* ft_lstadd_front_bonus.c by alban kerloc'h */

#include "libft.h"

void	ft_lstadd_front(t_list **begin_list, t_list *lt)
{
	if (begin_list)
	{
		if (lt)
		{
			if (*begin_list)
			{
				lt->next = *begin_list;
				*begin_list = lt;
			}
			else
				*begin_list = lt;
		}
		else
			*begin_list = NULL;
	}
}
