#include "libft.h"

void	ft_toupperi(unsigned int i, char *s)
	{
			i = i + 0;
			if (*s >= 'a' && *s <= 'z')
				*s = *s - 32;
	}

char	ft_upchar(char c)
	{
		if (c >= 'a' &&  c <= 'z')
			return (c - 32);
		return(c);
	}

void	ft_charup(char *c)
	{
		if (*c >= 'a' &&  *c <= 'z')
			*c = *c - 32;
	}
	
char	ft_upchari(unsigned int i, char c)
	{
		i = i + 0;
		if (c >= 'a' &&  c <= 'z')
			return (c - 32);
		else
			return (c);
	}

int	main()
{

	// test for memalloc

	write(1, "MEMALLOC\n", 9);
	write (1, ft_memalloc(5), 5);

	// test for memdel

	char *testmemdel = strdup("workyes");
	void *testmemdel1 = (void *)testmemdel;

	write(1, "\nMEMDEL\n", 8);
	ft_memdel(&testmemdel1);
	write(1, testmemdel1, 7);

	// test for strnew

	write(1,"\nSTRNEW\n", 8);
	write(1, ft_strnew(5), 5);

	// test for strdel

	char *teststrdel = strdup("workyes");
	write(1, "\nSTRDEL\n", 8);
	ft_strdel(&teststrdel);
	write(1, teststrdel, 7);

	// test for strclr

	char *teststrclr = strdup("workyes");

	write(1, "\nSTRCLR\n", 8);
	ft_strclr(teststrclr);
	write(1, teststrclr, 7);

	// test for striter

	char *teststriter = strdup("work");

	write(1, "\nSTRITER\n", 9);
	ft_striter(teststriter, &ft_charup);
	write(1, teststriter, 7);

	// test for striteri
	
	char *teststriteri = strdup("workyes");

	write(1, "\nSTRITERI\n", 10);
	ft_striteri(teststriteri, &ft_toupperi);
	write(1, teststriteri, 7);

	// test for strmap

	char *teststrmap = strdup("workyes");

	write(1, "\nSTRMAP\n", 8);
	char *strmp = ft_strmap(teststrmap, &ft_upchar);
	write(1, strmp, 7);

	// test for strmapi

	char *teststrmapi = strdup("workyes");

	write(1, "\nSTRMAPI\n", 9);
	char *strmpi = ft_strmapi(teststrmapi, &ft_upchari);
	write(1, strmpi, 7);

	// test for strequ

	char *teststrequ1 = strdup("yeswork");
	char *teststrequ2 = strdup("yeswork");

	write(1, "\nSTREQU\n", 8);
	ft_putnbr(ft_strequ(teststrequ1, teststrequ2));

	// test for strnequ

	char *teststrnequ1 = strdup("workno");
	char *teststrnequ2 = strdup("workyes");

	write(1, "\nSTRNEQU\n", 9);
	ft_putnbr(ft_strnequ(teststrnequ1, teststrnequ2, 4));

	// test for strsub

	char *teststrsub = ft_strsub("workyes", 4 , 3);

	write(1, "\nSTRSUB\n", 8);
	write(1, teststrsub, 7);

	// test for strjoin

	char *teststrjoin1 = strdup("work");
	char *teststrjoin2 = strdup("yes");

	write(1, "\nSTRJOIN\n", 9);
	write(1, ft_strjoin(teststrjoin1, teststrjoin2), 8);

	// test for strtrim

	write (1, "\nSTRTRIM\n", 9);
	char *teststrtrim = strdup("   work   ");
	write(1, ft_strtrim(teststrtrim), 10);

	// test for ft_strsplit
	// test for itoa
	// test for putchar
	// test for putstr
	// test for putnbr
	// test for putendl
	// test for putchar_fd
	// test for putstr_fd
	// test for putnbr_fd
	// test for putendl_fd

	return (0);
}
