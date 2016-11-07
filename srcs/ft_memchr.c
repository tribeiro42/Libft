/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:43:05 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/07 21:10:50 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while(0 < n--)
	{
		if(*str == c)
			return (str);
		str++;
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
