#include "fun.h"

void    fun_string(char **av)
{
    int         i;

    i = -1;

    ft_putstr("Original : ");
    ft_putendl(av[1]);

    /* ***************** */
    /*      TOUPPER      */
    /* ***************** */

    ft_putstr("Toupper  : ");
    while(av[1][++i])
	av[1][i] = ft_toupper(av[1][i]);
    ft_putendl(av[1]);
    i = -1;
    /* ***************** */
    /*      TOLOWER      */
    /* ***************** */
    ft_putstr("Tolower  : ");
    while(av[1][++i])
	av[1][i] = ft_tolower(av[1][i]);
    ft_putendl(av[1]);
}
