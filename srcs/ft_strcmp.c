/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 11:40:44 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/08 23:11:06 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strcmp(char *s1, char *s2)
{
	while(*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

/*
int main ()
{
	char str1[15];
	char str2[15];
	int ret;


	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret = ft_strcmp(str1, str2);

	if(ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if(ret > 0) 
	{
		printf("str2 is less than str1");
	}
	else 
	{
		printf("str1 is equal to str2");
	}
   
	return(0);
}
*/
