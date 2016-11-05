/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:24:25 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/05 19:52:05 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char*)s2;
	while(s1[i])
		i++;
	while(*ptr)
	{
		s1[i] = *ptr;
		ptr++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/*
int main ()
{
	char str[80];
	strcpy (str,"these ");
	ft_strcat (str,"strings ");
	ft_strcat (str,"are ");
	ft_strcat (str,"concatenated.");
	puts (str);
	return 0;
}
*/
