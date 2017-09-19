/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:35:09 by tribeiro          #+#    #+#             */
/*   Updated: 2017/09/18 15:47:37 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr_color(char *str, char *color)
{	
	ft_putstr(color);
    write(1, str, ft_strlen(str));
    ft_putstr(COLOR_RESET);
}
