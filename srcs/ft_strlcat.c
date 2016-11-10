/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:59:09 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/10 00:41:43 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
		char *d = dst;
		char *s = (char*)src;
		size_t n = size;
		size_t dlen;

		/* Find the end of dst and adjust bytes left but don't go past end */
		while (*d != '\0' && n-- != 0)
			d++;
		dlen = d - dst;
		n = size - dlen;

		if (n == 0)
			return(dlen + strlen(s));
		while (*s != '\0') 
		{
			if (n != 1)
			{
				*d++ = *s;
				n--;
			}
			s++;
		}
		*d = '\0';

		return(dlen + (s - src));
}
