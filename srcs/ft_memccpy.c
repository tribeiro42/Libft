/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:16:30 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/07 20:49:04 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	
	d = (unsigned char*)dst;
	s = (unsigned char *)src;
	while(0 < n--)
	{
		*d = *s;
		d++;
		if(*s == (c & 255))
			return (d);
		s++;
	}
	return (NULL);
}
/*
char* msg = "This is the string: not copied";

int main( void )
{
    char buffer[80];

    memset( buffer, '\0', 80 );
	puts(msg);
	ft_memccpy( buffer, msg, ':', 80 );
    puts(buffer);
    
    return 0;
}
*/
