#include <stdio.h>
char	*ft_strcat(char *dest, char *src);
int main(void)
{
	char s1[50]= "aba";
	char s2[6]= "solo";

	printf("\n%s", ft_strcat(s1,s2));
}
