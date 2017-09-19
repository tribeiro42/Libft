/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 19:15:55 by tribeiro          #+#    #+#             */
/*   Updated: 2017/09/19 19:17:12 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr_color_fd(int fd,char *str, char *color)
{
	ft_putstr_fd(color, fd);
    write(fd, str, ft_strlen(str));
    ft_putstr_fd(COLOR_RESET, fd);
}
