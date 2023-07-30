/* updated: 11/10/2019 */
/* ft_lstclear_bonus.c by alban kerloc'h */

#include "libft.h"

void	ft_lstclear(t_list **begin_list, void (*del)(void *))
{
	t_list *lt;
	t_list *list;

	if (begin_list)
	{
		lt = *begin_list;
		while (lt)
		{
			list = lt->next;
			del(lt->content);
			free(lt);
			lt = list;
		}
		*begin_list = NULL;
	}
}
