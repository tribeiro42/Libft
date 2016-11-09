/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:59:09 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/08 22:50:36 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	n;
	size_t	dlen;

	d = (char*) dst;
	s = (char*) src;
	dlen = ft_strlen(dst);
		n = size - dlen;
	while(*d)
		d++;
	while(*s)
	{
		if(n-- != 0)
		{
			*d = *s;
			d++;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
