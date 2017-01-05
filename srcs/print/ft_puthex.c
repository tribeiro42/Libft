#include "libft.h"

void		ft_puthex(unsigned long l)
{
	if (l >= 16)
	{
			ft_puthex(l / 16);
			ft_puthex(l % 16);
	}
	else
		ft_putchar(HEX[l]);
}
