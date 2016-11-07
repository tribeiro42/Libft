/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:09:30 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/07 16:34:53 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
    char	*cp;
    char	*s1;
    char	*s2;
	size_t	i;

	i = 0;
    cp = (char *) s;
    if(!*to_find)
		return (char *) s;
    while(*cp)
    {
        s1 = cp;
		s2 = (char *) to_find;
		i = 0;
		while((*s1 && *s2 && !(*s1 - *s2)) || i++ <= len)
		{
			s1++;
			s2++;
		}
		if(!*s2)
			return (cp) ;
		cp++;
    }
    return (NULL);
}
/*

int		main(int argc, char **argv)
{
	(void)argc;
	printf("STRNSTR    :%s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
	printf("FT_STRNSTR :%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	
	return (0);
}
*/
