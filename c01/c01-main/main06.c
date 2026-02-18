#include <stdio.h>
int main(void)
{
	int	i;
	char *str;

	str = "Hi Mina!";
	//char *str = "123456";

	i = ft_strlen(str);
	printf("\nthe string\"%s\" has %d characters.",str , i);
	return (0);
}
