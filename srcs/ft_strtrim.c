/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sttrrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:16:29 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/10 05:57:23 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_isdel(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	char	*dst;
	int		i;

	if (s)
	{
		i = 0;
		while (ft_isdel(s[i]))
			s++;
		while (s[i])
			i++;
		while (i-- > 0 && ft_isdel(s[i]))
			(void)s;
		dst = ft_strsub(s, 0, i + 1);
		if (dst)
			return (dst);
	}
	return (ft_strdup(s));
}
