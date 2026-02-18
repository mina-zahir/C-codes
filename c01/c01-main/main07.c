#include <stdio.h>
int main(void)
{
	int tab[4] = {1,2,3,4} ;
    printf("\nThe integer array\[%d, %d, %d, %d\]:",tab[0], tab[1],tab[2],tab[3]);
	ft_rev_int_tab(tab,4 );
	printf("\nChanged and reversed to\[%d, %d, %d, %d\]:",tab[0], tab[1],tab[2],tab[3]);
	return (0);
}
