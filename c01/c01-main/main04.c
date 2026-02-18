#include<stdio.h>
int	main(void)
{
	int a;
	int	b;

	a = 9;
	b = 4;
	printf("\na = %d b = %d\n",a,b);
	ft_ultimate_div_mod(&a, &b);
	printf("After division:\na = %d b = %d\n",a,b);
	
}
