/* updated: 11/10/2019 */
/* ft_lstdelone_bonus.c by alban kerloc'h */

#include "libft.h"

void	ft_lstdelone(t_list *lt, void (*del)(void *))
{
	if (lt)
	{
		del(lt->content);
		free(lt);
		lt = NULL;
	}
}
