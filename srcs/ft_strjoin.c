/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 05:35:00 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/09 06:28:22 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	len;
	int		i;
	int		y;

	i = 0;
	y = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if(!(dst = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while(s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while(s2[y])
	{
		dst[i + y] = s2[y];
		y++;
	}
	dst[i + y] = '\0';
	return (dst);
}
