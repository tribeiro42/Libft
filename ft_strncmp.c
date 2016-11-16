/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 11:40:44 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/12 22:14:48 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	  return (0);
	while (*s1 == *s2 && *s1 && *s2 && i <= n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
