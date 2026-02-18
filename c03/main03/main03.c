#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int main(void)
{
	char s1[50]= "aba";
	char s2[6]= "solo";

	printf("\n%s", ft_strncat(s1,s2,2));
}
