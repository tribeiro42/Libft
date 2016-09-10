#include "ft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
    unsigned int nb;

    nb = n;
    if(n < 0)
    {
	write(1, "-", 1);
	nb = -nb;
    }
    if(nb > 9)
    {
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
    }
    else
	ft_putchar(nb + 48);
}
