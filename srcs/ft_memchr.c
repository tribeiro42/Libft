/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:43:05 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/06 16:50:28 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while(i <= n)
	{
		if(str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	char * pch;
	char str[] = "Example string";
	pch = (char*) ft_memchr (str, 'p', strlen(str));
	if (pch!=NULL)
		printf ("'p' found at position %ld.\n", pch-str+1);
	else
		printf ("'p' not found.\n");
	return 0;
}
*/