#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main()
{

	// test for strlen

	char *teststrlen = strdup("workyes");
	int i;

	i = strlen(teststrlen);
	write(1, "STRLEN\n", 7);
	write(1, "strlen is:", 10);
	ft_putnbr(i);

	// test for strcmp

	char *teststrcmp1 = strdup("workyes");
	char *teststrcmp2 = strdup("workno");

	write(1, "\nSTRCMP\n", 8);
	ft_putnbr(strcmp(teststrcmp1, teststrcmp2));

	// test for strncmp

	char *teststrncmp1 = strdup("workyes");
	char *teststrncmp2 = strdup("workno");

	write(1,"\nSTRNCMP\n", 9);
	ft_putnbr(strncmp(teststrncmp1, teststrncmp2, 8));

	// test for strcpy

	char *teststrcpy;

	write(1, "\nSTRCPY\n", 8);
	teststrcpy = malloc(11);
	strcpy(teststrcpy, "workyesno");
	write(1, teststrcpy, 9);

	// test for strncpy

	char *teststrncpy;

	write(1, "\nSTRNCPY\n", 9);
	teststrncpy = malloc(9);
	strncpy(teststrncpy, "workyesno", 7);
	write(1, teststrncpy, 9);


	// test for strcat

	char *teststrcat = strdup("work");

	write(1, "\nSTRCAT\n", 8);
	teststrcat = strcat(teststrcat, "yes");
	write(1, teststrcat, 7);

	// test for strncat

	char *teststrncat;

	write(1, "\nSTRNCAT\n", 9);
	teststrncat = malloc(11);
	strcpy(teststrncat, "work");
	strncat(teststrncat, "yesno", 6);
	write(1, teststrncat, 11);


	// test for strchr

	char *teststrchr;
	char *res;

	write(1, "\nSTRCHR\n", 8);
	teststrchr = malloc(11);
	strcpy(teststrchr, "workyes");
	res = strrchr(teststrchr, 'y');
	write(1, res, 3);

	// test for strrchr

	char *teststrrchr;

	write(1, "\nSTRRCHR\n", 9);
	teststrrchr = malloc(11);
	strcpy(teststrrchr, "workyesyes");
	res = strrchr(teststrrchr, 'y');
	write(1, res, 3);

	// test for strstr

	char *teststrstr;

	write(1, "\nSTRSTR\n", 8);
	teststrstr = malloc(11);
	strcpy(teststrstr, "workyesyes");
	res = strstr(teststrstr, "yes");
	write(1, res, 8);

	// test for strnstr

	char *teststrnstr;

	write(1, "\nSTRNSTR\n", 9);
	teststrnstr = malloc(11);
	strcpy(teststrnstr, "workyensyes");
	res = strnstr(teststrnstr, "yen", 8);
	write(1, res, 3);

	// test for strlcpy
	
	char *teststrlcpy = strdup("work");
	size_t count;

	write(1, "\nSTRLCPY\n", 9);
	count = strlcpy(teststrlcpy, "yesno", 11);
	write(1, teststrlcpy, 11);

	// test for strdup

	write(1, "\nSTRDUP\n", 8);
	char *teststrdup = strdup("yes work");
	write(1, teststrdup, 8);

	// test for strlcat
	
	write (1, "\nSTRLCAT\n", 9);
	char *teststrlcat;
	teststrlcat = malloc(11);
	strcpy(teststrlcat, "workyesno");
	int rs = strlcat(teststrlcat, "yes", 7);
	write(1, teststrlcat, 15);
	ft_putnbr(rs);


	return (0);
}
