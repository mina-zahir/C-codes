#include <stdio.h>
char    *ft_strstr(char *str, char *to_find);
int main(void)
{
	char s1[50]= "abasolo";
	char s2[6]= "solo";
	char *s3 = ft_strstr(s1,s2);
printf("\n%s",s3);
}
