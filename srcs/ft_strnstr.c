/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:09:30 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/08 23:57:22 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
    size_t	y;
	size_t	i;

	i = 0;
	y = 0;
    if(!*to_find)
		return ((char *) s);
    while(i < len && s[i])
    {
		while(s[i + y]== to_find[y] && (i <= len))
		{
			if(ft_strlen(to_find) + i > len)
				return (NULL);
			if(to_find[y + 1] == '\0' && (i <= len))
				return ((char*)s + i);
			y++;
		}
		i++;
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
