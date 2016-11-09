/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 03:53:13 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/09 05:32:34 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strsub(char const *s, unsigned int  start, size_t len)
{
	char	*dst;
	char	*ptr;
	size_t	i;

	i = 0;
	if(len > 0 && s)
	{
		if(!(dst = (char*)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		ptr = dst;
		while(i < len)
		{
			ptr[i] = s[start + i];
			i++;
		}
		ptr[i] = '\0'; 
		return (dst);
	}
	return (NULL);
}
