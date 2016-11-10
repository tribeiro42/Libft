/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 03:54:10 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/10 20:37:11 by tribeiro         ###   ########.fr       */
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

char	*ft_sncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	lenght;
	char			*d;

	d = dest;
	lenght = 0;
	while (src[lenght])
		lenght++;
	while (n--)
	{
		if (*src)
			*dest++ = *src++;
		else
			*dest++ = '\0';
	}
	*dest = '\0';
	return (d);
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
	int		len;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	word = str_nbr_word((char*)s, c);
	if (!(dest = (char **)malloc(sizeof(char*) * word + 1)))
		return (NULL);
	while (i2 < word)
	{
		while (s[i] == c)
			i++;
		len = str_len((char *)&s[i], c);
		dest[i2] = (char *)malloc(sizeof(char) * len + 1);
		ft_sncpy(dest[i2], (char*)s + i, len);
		i += len;
		i2++;
	}
	dest[i2] = 0;
	return (dest);
}
