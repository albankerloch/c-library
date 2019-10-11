#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void ft_list_sort(t_list **begin_list);
void ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_create_elem(void *data);
int ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
void ft_list_push_back(t_list **begin_list, void *data);
t_list *ft_list_push_strs(int size, char **strs);
void ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
void ft_list_reverse(t_list **begin_list);

void aff_list(t_list *begin)
{
	int *c;

	while(begin)
	{
		c = begin->content;
		printf("%d\n", *c);
		begin = begin->next;
	}
}

void aff_list2(t_list *begin)
{
    char **c;

    while(begin)
    {
        c = begin->content;
        printf("-%s-\n", *c);
        begin = begin->next;
    }
}

int main(int ac, char **av)
{
	t_list elem1;
	t_list elem2;
	t_list elem3;
	t_list elem4;
	t_list t;
	t_list *begin_list;
/*	int a;
	int b;
	int c;
	int d;
	char    str [] = "a";
	void *e;

	d = 1;
	e = &d;
	begin_list = ft_lstnew(str);
 	aff_list(begin_list);
	begin_list = ft_lstnew(str);
 	aff_list2(begin_list);
*/
	begin_list=&elem1;
	elem1.next=&elem2;
	elem2.next=&elem3;
	elem3.next=NULL;
	//elem4.next = NULL;
	
/*	a = 1;
	b = 2;
	c = 3;
	d = 42;

	elem1.content = &a;
	elem2.data = &b;
	elem3.data = &c;

	aff_list(begin_list);
  ft_list_sort(&begin_list);
  aff_list(begin_list);


  begin_list = ft_create_elem(&d);
  aff_list(begin_list);

	aff_list(begin_list);
	printf("\n");
	ft_list_push_front(&begin_list, &d);
	aff_list(begin_list);
	printf("\n");
	begin_list = NULL;
	ft_list_push_front(&begin_list, &d);
	aff_list(begin_list);
	printf("\n");

  printf("%d", ft_list_size(begin_list));

  e = elem3.data;
    printf("%d\n", *e);
    printf("%p\n", elem2.next);
    t = *ft_list_last(begin_list);
    e = t.data;
    printf("%d\n", *e);

	aff_list(begin_list);
    ft_list_push_back(&begin_list, &d);
    aff_list(begin_list);
	begin_list = NULL;
    ft_list_push_back(&begin_list, &a);
	aff_list(begin_list);
*/
	char *a;
	char *b;
	char *c;
	char *d;
	char *f;
	char **e;
	t_list *add_lt;
	
	a = "essai";
    b = "test";
    c = "tete";
    d = "pied";

    elem1.content = &a;
    elem2.content = &b;
    elem3.content = &c;
//	elem4.content = &d;

//	begin_list = NULL
/*	printf("%d", ft_lstsize(begin_list));
	add_lt = ft_lstnew(&d);
//	ft_lstadd_front(NULL, add_lt);
	ft_lstadd_back(&begin_list, add_lt);
    aff_list2(begin_list);
	printf("%d", ft_lstsize(begin_list));


	aff_list2(begin_list);
	aff_list2(ft_lstlast(begin_list));
	aff_list2(ft_lstlast(NULL));
*/

/*	printf("\n");
	begin_list = ft_list_push_strs(ac, av);
    aff_list2(begin_list);
	
	ft_list_clear(begin_list, free_ftc());
    aff_list2(begin_list);

	unsigned int nbr;
	nbr = 1;

	t = *ft_list_at(begin_list, nbr);
	e = t.data;
    printf("\n%s\n", *e);

	ft_list_reverse(&begin_list);
    aff_list2(begin_list);
*/


}
