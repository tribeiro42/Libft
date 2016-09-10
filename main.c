/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 21:49:50 by tribeiro          #+#    #+#             */
/*   Updated: 2016/08/06 09:19:31 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "srcs/ft.h"
#include <stdlib.h>
void	c_atoi(char **av);
void	cstring(char **av);

int	main(int ac, char **av)
{
    (void)ac;
    c_atoi(av);

    return 0;
}


void	cstring(char **av)
{
    int		i;

    i = -1;

    ft_putstr("Original : ");
    ft_putendl(av[1]);
    
    /* ***************** */
    /*	    TOUPPER	 */
    /* ***************** */
    
    ft_putstr("Toupper  : ");
    while(av[1][++i])
	av[1][i] = ft_toupper(av[1][i]);
    ft_putendl(av[1]);
    i = -1;
    /* ***************** */
    /*	    TOLOWER	 */
    /* ***************** */
    ft_putstr("Tolower  : ");
    while(av[1][++i])
	av[1][i] = ft_tolower(av[1][i]);
    ft_putendl(av[1]);
}

void	c_atoi(char **av)
{
    /* ***************** */
    /*	      ATOI	 */
    /* ***************** */

    ft_putstr("FT_ATOI :");
    ft_putnbr(ft_atoi(av[1]));
    ft_putchar('\n');
    ft_putstr("ATOI    :");
    ft_putnbr(atoi(av[1]));
}
