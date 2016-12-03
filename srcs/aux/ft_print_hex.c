/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 10:48:42 by tribeiro          #+#    #+#             */
/*   Updated: 2016/12/03 11:36:04 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
/*
** Affiche la conversion de nombre passer en parametre (decimal) en hexadecimal
** NON fonctionnel !!
*/

void	ft_print_hex(int nb)
{
	unsigned int nbr;
	int		sign;

	sign = 0;
	nbr = nb;
	if (nb < 0 && sign == 0)
	{
		sign = 1;
		ft_putchar('-');
	}
	if (nbr > 16)
	{
		ft_print_hex(nbr / 16);
		ft_print_hex(nbr % 16);
	}
	if (nbr < 16 && nbr > 9)
		ft_putchar((nbr - 10) + 65);
	else
		ft_putchar(nbr + 48);
}

int		main(void)
{
	ft_print_hex(365);
	return (0);
}










