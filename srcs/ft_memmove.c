/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:24:17 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/04 21:24:28 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memmove example */
#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "memmove can be very useful......";
	memmove (str+20,str+15,11);
	puts (str);
	return 0;
}
