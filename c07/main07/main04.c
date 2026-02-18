#include <stdio.h>

int main(void)
{

char *ft_convert_base(char *nbr, char *base_from, char *base_to);
    
	char nbr[] = "2a";
	char base_from[] = "0123456789abcdef";
	char base_to[] = "01";
	char *result = ft_convert_base(nbr, base_from, base_to);
	
	printf("nbr %s base_from %s base_to %s answer: %s", nbr, base_from, base_to, result);
	free(result);
	return (0);
}

