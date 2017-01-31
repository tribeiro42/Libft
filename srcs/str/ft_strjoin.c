/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 05:35:00 by tribeiro          #+#    #+#             */
/*   Updated: 2017/01/31 14:35:46 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		y;

	if (!(s1 || s2))
		return (ft_strdup((s1 == NULL) ? s2 : s1));
	i = 0;
	y = 0;
	if (!(dst = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		dst[i + y] = s2[y];
		y++;
	}
	return (dst);
}
