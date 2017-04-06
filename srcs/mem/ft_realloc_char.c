/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 19:07:41 by tribeiro          #+#    #+#             */
/*   Updated: 2017/04/03 19:29:31 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc_char(char *tab, size_t len)
{
	char	*new;
	int		i;

	i = 0;
	if(((new = (char*)malloc(sizeof(char) * len)) == NULL) || (len = 0))
		return (tab);
	ft_bzero(new, len);
	while (tab[i])
	{
		new[i] = tab[i];
		i++;
	}
	free(tab);
	return (new);
}
