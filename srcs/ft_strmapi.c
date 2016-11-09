/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 01:51:19 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/09 01:56:13 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cp;
	char	*dst;
	int		i;

	i = 0;
	cp = (char*) s;
	if(!(dst = (char*)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while(cp[i])
	{
		dst[i] = f(i, cp[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}
