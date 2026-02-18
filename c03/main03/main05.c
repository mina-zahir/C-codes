#include <stdio.h>
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char s1[50]= "abasolo";
	char s2[6]= "solo";
	printf("\n%d \n%s",ft_strlcat(s1,s2,11) , s1);
}
