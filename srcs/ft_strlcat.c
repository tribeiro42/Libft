/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:59:09 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/10 21:03:28 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	while (dst[d] && d < n)
		d++;
	s = d;
	while (src[d - s] && d < n - 1)
	{
		dst[d] = src[d - s];
		d++;
	}
	if (s < n)
		dst[d] = '\0';
	return (s + ft_strlen((char*)src));
}
