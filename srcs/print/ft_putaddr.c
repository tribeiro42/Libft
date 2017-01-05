#include "libft.h"

void		ft_putaddr(void *ptr)
{
	ft_putstr("0x");
	ft_puthex((unsigned long)ptr);
}
