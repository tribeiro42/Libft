/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_menccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:16:30 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/04 19:33:38 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *dest;
	char *sc;
	size_t i;

	dest = dst;
	sc = (char *)src;
	i = 0;

	while(i < n && sc[i] != c)
	{
		dest[i] = sc[i];
		i++;
		if(i == n)
			return (0);
	}
	dest[i] = '\0';
	return (dest);
}
/*
char* msg = "This is the string: not copied";

int main( void )
{
    char buffer[80];

    memset( buffer, '\0', 80 );
    ft_memccpy( buffer, msg, ':', 80 );
	
    printf( "%s\n", buffer );
    
    return 0;
}
*/
