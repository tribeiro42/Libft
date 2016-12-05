/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 10:48:42 by tribeiro          #+#    #+#             */
/*   Updated: 2016/12/04 16:16:56 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
** Affiche la conversion de nombre passer en parametre (decimal) en hexadecimal
** NON fonctionnel !!
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(int nb)
{
	unsigned int nbr;
	int		sign;

	sign = 0;
	nbr = nb;
	if (nb < 0 && sign == 0)
	{
		printf ("(0)");
		sign = 1;
		ft_putchar('-');
	}
	if (nbr > 15)
	{
		//printf("(1)");
		ft_print_hex(nbr / 16);
		ft_print_hex(nbr % 16);
	}
	//printf("\nNBR avant le if : %d\n", nbr);
	// a + nb : a + 0;
	if (nbr <= 15 && nbr >= 10)
	{
		//printf ("(2)(%d)", nbr);
		ft_putchar((nbr + 39)  + 48);
	}
	else
	{
		//printf ("(3)");
		ft_putchar(nbr + 48);
	}
}

int		main(void)
{
	ft_print_hex(365);
	ft_putchar('\n');
	ft_print_hex(15);
	return (0);
}
