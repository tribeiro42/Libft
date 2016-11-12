/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sttrrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:16:29 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/12 23:38:42 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isdel(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}
char	*ft_strtrim(char const *s)
{
	char	*d;
	int		i;
	int		y;
	if(!s)
		return (NULL);
	i = 0;
	y = 0;
	while(ft_isdel(s[i]))
		i++;
	while(s[i] && !(ft_isdel(s[i])))
	{
		i++;
		y++;
	}
	if(!(d = (char*)malloc(sizeof(char) * y + 1)))
	   return (NULL);
	ft_strncpy(d, &s[i], y);
	return (d);
}
