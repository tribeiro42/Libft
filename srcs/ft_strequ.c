/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 01:57:22 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/10 05:30:30 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1)
	{
		if (ft_strcmp((char*)s1, (char*)s2) == 0)
			return (1);
		return (0);
	}
	return (-1);
}