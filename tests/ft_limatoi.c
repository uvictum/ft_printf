#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int i;

	i = 0;
	char test[60]; 

	test[0] = '9';
	while (atoi(test) != -1)
	{
		test[i] = '9';
		i++;
	}
	printf("i = %i", i);
}
