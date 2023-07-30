/* updated: 11/10/2019 */
/* ft_strjoin.c by alban kerloc'h */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	size_t	i;
	char	*s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(s =
	(char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	j = 0;
	while (j < ft_strlen(s1))
	{
		s[j] = s1[j];
		j++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		s[j] = s2[i];
		j++;
		i++;
	}
	s[j] = '\0';
	return (s);
}
