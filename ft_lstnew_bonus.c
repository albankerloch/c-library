/* updated: 11/10/2019 */
/* ft_lstnew_bonus.c by alban kerloc'h */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lt;

	lt = NULL;
	if (!(lt = (t_list*)malloc(sizeof(t_list))))
		return (lt);
	if (content)
		lt->content = content;
	else
		lt->content = NULL;
	lt->next = NULL;
	return (lt);
}
