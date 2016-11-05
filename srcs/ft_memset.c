/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:49:48 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/04 16:36:15 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SIZE T LIB */
#include "ft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = ptr;
	while(s1 && i < num)
	{
		s1[i++] = value;
	}
	return (s1);
}
