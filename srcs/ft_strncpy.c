/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:54:31 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/05 20:03:47 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t	i;
	char	*s;
	char	*ptr;

	s = (char *)src;
	ptr = dst;
	i = 0;
	while(i <= len && *src)
	{
		ptr[i] = src[i];
		i++;
	}
	return (dst);
}
