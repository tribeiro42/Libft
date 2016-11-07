/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mencpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:01:10 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/07 19:45:55 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*cp;
	char	*dest;
	size_t	i;

	dest = (char*)dst;
	cp = (char*)src;
	i = 0;
	while(i < n)
	{
		dest[i] = cp[i];
		i++;
	}
	return (dst);
}
/*
int		main (void)
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	char dest2[50];

	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, strlen(src)+1);
	ft_memcpy(dest2, src, strlen(src) + 1);
	printf("After memcpy dest     = %s\n", dest);
	printf("After ft_memcpy dest2 = %s\n", dest2);
   
	return(0);
}

*/
