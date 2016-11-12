/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mencpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:01:10 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/12 22:07:11 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*cp;
	char	*dest;
	size_t	i;

	dest = (char *)dst;
	cp = (char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = cp[i];
		i++;
	}
	return (dst);
}
