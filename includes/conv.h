/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 21:00:45 by tribeiro          #+#    #+#             */
/*   Updated: 2017/01/14 21:16:51 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CONV_H
# define	CONV_H

# define BASE "0123456789abcdefghijklmnopqrstuvwxyz"
/*
** INT TO ASCII
*/

char				*ft_itoa(int n);
char				*ft_itoa_base(int n, int base);

/*
** ASCII TO INT
*/

int					ft_atoi(char *str);

#endif
