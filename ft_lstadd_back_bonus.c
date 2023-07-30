/* updated: 11/10/2019 */
/* ft_lstadd_back_bonus.c by alban kerloc'h */

#include "libft.h"

void	ft_lstadd_back(t_list **begin_list, t_list *lt)
{
	t_list *l;

	if (begin_list)
	{
		if (*begin_list)
		{
			l = *begin_list;
			while (l->next)
				l = l->next;
			if (lt)
				l->next = lt;
		}
		else
			*begin_list = lt;
	}
}
