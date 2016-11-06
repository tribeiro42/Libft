/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:52:57 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/06 18:37:35 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char*) s1;
	ptr2 = (char*) s2;
	while(((*ptr1 == *ptr2) && (*ptr1 && *ptr2)) || n-- > 1)
	{
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);
}

int main ()
{
	char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);

	ret = ft_memcmp(str1, str2, 5);
	ft_putnbr(ret);
	if(ret > 0)
	{
		printf("str2 is less than str1");
	}
	else if(ret < 0) 
	{
		printf("str1 is less than str2");
	}
	else 
	{
		printf("str1 is equal to str2");
	}
   
	return(0);
}

