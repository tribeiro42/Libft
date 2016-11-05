/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:31:10 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/05 19:54:22 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

#include "ft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	ft_strncpy(s1, s2, n);
	return (s1);
}
/*
int main ()
{
	char str1[20];
	char str2[20];
	strcpy (str1,"To be ");
	strcpy (str2,"or not to be");
	strncat (str1, str2, 6);
	puts (str1);
	return 0;
}
*/
