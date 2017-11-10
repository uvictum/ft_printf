#include "libft.h"
#include <stdio.h>

int	main()
{
	char *str = strdup("**hello*fellow***students*");
	char **array;
	int i = 0;

	array = ft_strsplit(str, '*');
	while (array[i])
	{
		printf("%i word :%s\n", i, array[i]);
		i++;
	}
	return (0);
}
