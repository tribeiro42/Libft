/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:43:05 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/12 22:06:30 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	u_c
	
	str = (unsigned char *)s;
	u_c = (unsigned char)n;
	while (0 < n--)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
