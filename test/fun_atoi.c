#include "fun.h"
#include <stdio.h>
#include <string.h>
#include "../srcs/ft.h"
#include <stdlib.h>

void	fun_atoi(char **av)
{
    ft_putstr("FT_ATOI :");
    ft_putnbr(ft_atoi(av[1]));
    ft_putchar('\n');
    ft_putstr("ATOI    :");
    ft_putnbr(atoi(av[1]));
}
