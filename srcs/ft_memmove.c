/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:24:17 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/07 21:04:40 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>
#include <string.h>
#include "ft.h"

 void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char*) dst;
	s = (char*) src;
	if(*d < *s)
	{
		d += len - 1;
		s += len - 1;
		while(len-- > 0)
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
/*
int main ()
{
	char str[] = "memmove can be very useful......";
	char s1[] = "memmove can be very useful......";
	puts (str);
	memmove (str+20,str+15,11);
	ft_memmove (s1+20,s1+15,11);
	puts (str);
	puts (s1);
	return 0;
}
*/
