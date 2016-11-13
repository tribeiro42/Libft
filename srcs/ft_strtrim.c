/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sttrrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:16:29 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/13 19:50:00 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isdel(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	char	*d;
	int		i;
	int		y;
	int		z;

	i = 0;
	z = 0;
	if (!s)
		return (NULL);
	while (ft_isdel(s[i]))
		i++;
	y = ft_strlen(s);
	if (i > y)
		return (d = malloc(sizeof(char)));
	while (ft_isdel(s[y]))
		y--;
	if (!(d = (char*)malloc(sizeof(char) * (y - i) + 2)))
		return (NULL);
	while (i <= y)
		d[z++] = s[i++];
	d[z] = '\0';
	return (d);
}
