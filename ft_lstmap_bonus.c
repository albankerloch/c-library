/* updated: 11/10/2019 */
/* ft_lstmap_bonus.c by alban kerloc'h */

#include "libft.h"

t_list	*ft_lstmap(t_list *begin_list, t_list *(*f)(void *))
{
	t_list *list;

	if (begin_list)
	{
		list = f(begin_list);
		list->next = ft_lstmap(begin_list->next, f);
		return (list);
	}
	return (NULL);
}
