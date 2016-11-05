/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:56:27 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/04 14:07:21 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
