#include <stdio.h>

int	main()
{
	int	*num_array;
	int min = 4;
	int max = 9;
	int size;
	
	size = ft_ultimate_range(&num_array,min,max);
	int i;

	if (size == -1)
	{
		printf("Error: Malloc failed.\n");
		return (1);
	}
	if (size == 0)
	{
		printf("Min was >= Max, or array is empty.\n");
	}
	else
	{
		printf("Array size: %d\n", size);
		for (i = 0; i < size; i++)
		{
			printf("Element %d: %d\n", i, num_array[i]);
		}
		free(num_array);
	}
	return (0);
}
