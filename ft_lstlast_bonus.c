/* updated: 11/10/2019 */
/* ft_lstlast_bonus.c by alban kerloc'h */

#include "libft.h"

t_list	*ft_lstlast(t_list *begin_list)
{
	t_list	*lt;

	lt = begin_list;
	if (lt)
	{
		while (lt->next)
			lt = lt->next;
		return (lt);
	}
	return (NULL);
}
