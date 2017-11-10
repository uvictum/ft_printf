#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main()
{

	// test for memset
	
	char *testmemset = strdup("workyes");
	
	memset(testmemset, 0, 4);
	write(1, "MEMSET\n", 7);
	write(1, testmemset, 8);
	
	// test for bzero
	
	char *testbzero = strdup("workyes");
	

	bzero(testbzero, 4);
	write(1, "\nBZERO\n", 7);
	write(1, testbzero, 8);

	
	// test for memcpy
	
	char *testmemcpy;

	write(1, "\nMEMCPY\n", 8);
	testmemcpy = malloc(11);
	strcpy(testmemcpy, "workyesno");
	memcpy(testmemcpy + 7, testmemcpy + 4, 4);
	write(1, testmemcpy, 11);

	// test for memccpy

	char *testmemccpy;

	write(1, "\nMEMCCPY\n", 9);
	testmemccpy = malloc(11);
	strcpy(testmemccpy, "workyesno");
	memccpy(testmemccpy + 7, testmemccpy + 4, 'n', 3);
	write(1, testmemccpy, 10);


	// test for memmove

	char *testmemmove;

	write(1, "\nMEMMOVE\n", 9);
	testmemmove = malloc(11);
	strcpy(testmemmove, "workyesno");
	memmove(testmemmove + 7, testmemmove + 4, 4);
	write(1, testmemmove, 11);

	// test for memchr
	
	char *testmemchr;
	char *res;

	write(1, "\nMEMCHR\n", 8);
	testmemchr = malloc(11);
	strcpy(testmemchr, "workyes");
	res = memchr(testmemchr, 'y', 5);
	write(1, res, 3);


	// test for memcmp
	
	char *testmemcmp1;
	char *testmemcmp2;
	int	rslt;

	write(1, "\nMEMCMP\n", 8);
	testmemcmp1 = strdup("workyes");
	testmemcmp2 = strdup("workno");
	rslt = memcmp(testmemcmp1, testmemcmp2, 8);
	printf("%i",rslt);
	
	return (0);
}
