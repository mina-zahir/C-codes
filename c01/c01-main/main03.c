#include <stdio.h>

int main(void)
{
	int div;
	int mod;
	int a;
	int b;


    a = 18;
    b = 5;
    ft_div_mod(a, b, &div, &mod);
    printf("\na = %d b = %d div = %d mod = %d",a ,b, div, mod);

	return (0);
}
