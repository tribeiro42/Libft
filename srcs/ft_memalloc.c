/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 00:04:29 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/09 00:09:03 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
void	*ft_memalloc(size_t size)
{
	void	*dest;

	if(!(dest = malloc(size)))
		return (NULL);
	ft_bzero(dest, size);
	return (dest);
}
