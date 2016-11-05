/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:08:05 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/04 14:08:10 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putnbr_fd(int n, int fd)
{
    unsigned int nb;

    nb = n;
    if(n < 0)
    {
		ft_putchar_fd('-', fd);
		nb = -nb;
    }
    if(nb > 9)
    {
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
    }
    else
		ft_putchar_fd(nb + 48, fd);
}
