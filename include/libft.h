/**
 * @file libft.h
 * @author alban kerloc'h
 * @date 11/10/2019
 * @version 1.0
 */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *str, int c, size_t n);
void				*ft_bzero(void *str, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *dest, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
size_t				ft_strlen(const char *str);
int					ft_isalpha(int i);
int					ft_isdigit(int i);
int					ft_isalnum(int i);
int					ft_isascii(int i);
int					ft_isprint(int i);
int					ft_toupper(int i);
int					ft_tolower(int i);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strnstr(const char *str, const char *str2, size_t len);

/**
 * @brief Converts the initial portion of a string to its integer representation.
 * 
 * @details The function `ft_atoi` mimics the behavior of the standard C library 
 * function `atoi`. It skips any leading whitespace characters, handles an 
 * optional sign ('+' or '-'), and then converts the subsequent sequence of 
 * digits into an integer. The conversion stops at the first non-digit 
 * character.
 * 
 * @param str The string to be converted.
 * @return int The converted integer value. If no valid conversion could be 
 * performed, it returns 0. The behavior is undefined if the converted value
 * is out of the range of representable values by an `int`.
 */
int					ft_atoi(const char *str);
void				*ft_calloc(size_t n, size_t s);
char				*ft_strdup(const char *src);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *str, char charset);
char				*ft_itoa(int nbr);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstnew(void *content);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void*));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(void*));

#endif
