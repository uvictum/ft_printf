#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int res1;
	int res2;
	int i;
	char *test[6];

	test[0] = "52345834834810004539";
	test[1] = "atrwr 344";
	test[2] = "\n-12 434";
	test[3] = "-2147483648";
	test[4] = "\f\n\r\t22";
	test[5] = "–248";
	
	for (i = 0; i < 6; i++)
	{
		res1 = ft_atoi(test[i]);
		res2 = atoi(test[i]);
		printf("ft_atoi res %i\natoi res: %i\n", res1, res2);
	}
	
	return (0);
}
