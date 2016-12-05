/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:30:31 by tribeiro          #+#    #+#             */
/*   Updated: 2016/12/05 15:56:21 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_memswap(void *s1, void *s2, size_t len)
{
	void	*tmp;

	tmp = s1;
	s1 = s2;
	s2 = tmp;
}










