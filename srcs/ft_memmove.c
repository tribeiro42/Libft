/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:24:17 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/10 05:02:52 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (*d < *s)
	{
		d += len - 1;
		s += len - 1;
		while (len-- > 0)
		{
			*d = *s;
			d--;
			s--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (d);
}
