/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:24:17 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/06 19:25:08 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <stdio.h>
#include <string.h>
#include "ft.h"

 void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	tmp[len];
	
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	return (dst);
}

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
