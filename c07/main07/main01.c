#include <stdio.h>

int	main()
{
	int	*num_array;
	int min = 2147483640;
	int max = 2147483647;
	num_array = ft_range(min,max);
	int i;
   	for (i = 0; i < (max - min) ; i++)
        	printf("%d ", num_array[i]);
	free (num_array);
}
