/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:09:02 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/06 21:19:24 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
    char    *s1;
	int		ctp;

    s1 = (char*) s;
	ctp = 0;
	while (s1[ctp])
		ctp++;
	ctp--;
	while (ctp >= 0)
    {
        if(s1[ctp] == c)
            return (s1);
        ctp--;
    }
    return (0);
}
