/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 00:09:34 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/09 00:26:27 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_memdel(void **ap)
{
	if(*ap && ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
