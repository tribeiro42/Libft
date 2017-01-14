/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel_2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 20:46:03 by tribeiro          #+#    #+#             */
/*   Updated: 2017/01/14 20:46:18 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_tabdel_2d(char **ret, int mode)
{
	int			i;

	i = 0;
	while(ret && ret[i])
	{
		if (mode)
		{
			ft_putstr("FREE ->");
			ft_putendl(ret[i]);
		}
		ft_strdel(&(ret[i]));
		i++;
	}
	free(ret);
	ret = NULL;
	if (mode)
		ft_putendl("PTR FREE AND NULL");
}
