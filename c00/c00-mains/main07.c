#include<unistd.h>

int main()
{
	ft_putnbr(42);
    write(1, '\n', 1);
    ft_putnbr(0);
    write(1, '\n', 1);
	ft_putnbr(-44);
    write(1, '\n', 1);
	return(0);
}


