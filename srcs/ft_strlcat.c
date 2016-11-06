/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:59:09 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/06 20:54:32 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	n;
	size_t	dlen;

	d = (char*) dst;
	s = (char*) src;
	n = size;
	while(*d && n != 0)
		d++;
	dlen = *d - *dst
	n = size - dlen;
	if(n == 0)
		return (dlen + ft_strlen(s));
	while(*s)
	{
		if(n != 1)
		{
			*d = *s;
			d++;
			n--;
		}
		s++;
	}
	*d = 0;
	return (*dlen + *src)
}
