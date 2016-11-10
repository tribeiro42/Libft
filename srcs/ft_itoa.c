/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 00:02:43 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/10 01:53:37 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_intlen(int n, int* len, size_t* weight)
{
	*weight = 1;
	*len = 1;
	if(n >= 0)
	{
		*weight = 0;
		n = -n;
	}
	while(n / *weight < 9)
	{
		*len *= 10;
			weight++;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	size_t	weight;
	int		ctp;
	char	*str;

	ctp = 0;
	ft_intlen(n, &len, &weight);
	if(!(str = malloc(sizeof(char*) * weight + 1)))
		return (NULL);
	if(n < 0)
	{
		str[ctp] = '-';
		ctp++;
	}
	if(len >= 1)
	{
		str[ctp] = (n / 10 % len) + 48;
		len /= 10;
		ctp++;
	}
	str[ctp] = '\0';
	return (str);
}

