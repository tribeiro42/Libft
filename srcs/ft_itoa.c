/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 00:02:43 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/12 22:51:13 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lenword(int n)
{
	int		lw;

	lw = 1;
	while(n /= 10)
		lw++;
	return (lw);
}

char	*ft_itoa(int n)
{
	char	*d;
	int		lw;
	int		sig;
	unsigned nb;

	lw = ft_lenword(n);
	sig = 0;
	nb = (n < 0) ? -n : n; 
	if(n < 0)
		sig = 1;
	if(!(d = (char *)malloc(sizeof(char) * lw + sig + 1)))
	   return (NULL);
	d[lw + 1] = '\0';
	while(lw-- > 0)
	{
		d[lw + sig] = (nb % 10) + 48;
		nb /= 10;
	}
	if(sig == 1)
		d[0] = '-';
	return (d);
}

int		main(void)
{
	ft_putendl(ft_itoa(-2147483648));
}
