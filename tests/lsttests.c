#include "libft.h"

void dellst(void *ap, size_t size)
{
	if (size)
		ft_memdel(&ap);
}

void printlst(t_list *lst)
{
	write(1, lst->content, lst->content_size);
}

void	ft_charup(char *c)
	{
		if (*c >= 'a' &&  *c <= 'z')
			*c = *c - 32;
	}

t_list *lst_toupper(t_list *lst)
{
	ft_striter((char *)lst->content, &ft_charup);		
	return (lst);
}

int	main()
{
	//test for lstnew
	
	t_list *testlstnew;
	
	testlstnew = ft_lstnew("work", 4);
	write(1, testlstnew->content, 4);
	ft_putnbr(testlstnew->content_size);

	int i = 0;
	t_list *lstar;
	t_list *start;
	lstar = ft_lstnew("work", 4);
	start = lstar;
	while (i < 3)
	{
		lstar->next = ft_lstnew("work", 4);
		lstar = lstar->next;
		i++;
	}
	
	//test for lstdelone
	
	ft_lstdelone(&testlstnew, &dellst);
	if (!testlstnew)
		write(1, "Good\n", 5);	

	//test for lstadd
	
	ft_lstadd(&start, ft_lstnew("yes", 3));
	
	//test for lstiter
	
	ft_lstiter(start, &printlst);

	//test for lstmap
	
	t_list *testlstmap = ft_lstmap(start, &lst_toupper);
	ft_lstiter(testlstmap, &printlst);

	//test for lstdel
	
	ft_lstdel(&testlstmap, &dellst);
	if (!testlstmap)
		write(1, "Good\n", 5);	
	ft_lstiter(start, &printlst);

	return (0);
}
