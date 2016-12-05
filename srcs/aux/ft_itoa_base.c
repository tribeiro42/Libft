/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:33:21 by tribeiro          #+#    #+#             */
/*   Updated: 2016/12/05 15:52:36 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int		ft_lenword(int n, int base)
{
	int		lw;

	lw = 1;
	while (n /= base)
		lw++;
	return (lw);
}

char	*ft_itoa_base(int n, int base)
{
	char	basetab[37];
	char	*dest;
	int		len;

	basetab = "0123456789abcdefghijklmnopqrstuvwxyz";
	len = ft_lenword(n, base);
	if (!(dest = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	dest[len + 1] = '\0';
	while (len--)
	{
		dest[len] = basetab[(n % base)];
		n /= base;
	}
	return (dest);
}
int		main(void)
{
	printf("RESULT ->%s", ft_itoa_base(354, 2));
	return 0;
}













