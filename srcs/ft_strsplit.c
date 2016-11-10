/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 03:54:10 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/10 19:10:31 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		str_nbr_word(char *str, char c)
{
	int		nbr_word;
	int		i;

	nbr_word = 0;
	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] != c)
			nbr_word++;
		if (str[i - 1] == c && str[i] != c)
			nbr_word++;
		i++;
	}
	return (nbr_word);
}

int		str_len(char *str, char c)
{
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (str[i] != c && str[i])
	{
		i++;
		size++;
	}
	return (size);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**dest;
	int		word;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	word = str_nbr_word((char*)s, c);
	if(!(*dest = (char**)malloc(sizeof(char*) * word + 1)))
		return (NULL);
	while(i2 < word)
	{
		while(s[i] == c)
			i++;
		dest[i2] = (char *)malloc(sizeof(char) * str_len(&s[i] + 1));
		ft_strncpy(dest[i2], s + i, str_len(&s[i]));
		i += str_len(&s[i]);
		i2++;
	}
	dest[i2] = '\0';
	return (dest);
}

int		main(void)
{
	char	**tab;
	tab = ft_strsplit("*salut*les***etudiants*", '*');
	
	return (0);
}

