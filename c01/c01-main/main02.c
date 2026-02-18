#include <stdio.h>
int main(void)
{
	int a;
	int b;
	
	a = 3;
	b = 5;
	printf("\na =%d b = %d ",a,b);
	ft_swap(&a, &b);
	printf("\na =%d b = %d ",a,b);
	
}
