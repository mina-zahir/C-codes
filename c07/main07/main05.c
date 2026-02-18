#include <stdio.h>

int	main(void)
{
	char	*str = "Hello, Goodbye! M.Z";
	char	*charset = ", !."; 
	char	**result;
	int		i;

	result = ft_split(str, charset);
	if (!result)
		return (1);
	i = 0;
	while (result[i] != NULL)
	{
		printf("Word [%d]: %s\n", i, result[i]);
		free(result[i]); 
		i++;
	}
	free(result); 
	return (0);
}
