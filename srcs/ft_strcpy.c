/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:51:43 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/05 19:52:30 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*ptr;

	ptr = dst;
	while(*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dst);
}
/*
int main ()
{
	char str1[]="Sample string";
	char str2[40];
	char str3[40];
	ft_strcpy (str2,str1);
	ft_strcpy (str3,"copy successful");
	printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
	return 0;
}
*/
