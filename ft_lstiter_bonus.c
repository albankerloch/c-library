/* updated: 11/10/2019 */
/* ft_lstiter_bonus.c by alban kerloc'h */

#include "libft.h"

void	ft_lstiter(t_list *begin_list, void (*f)(void *))
{
	t_list *list;

	if (begin_list)
	{
		list = begin_list;
		while (list)
		{
			f(list);
			list = list->next;
		}
	}
}
