/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_binary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 10:29:19 by tribeiro          #+#    #+#             */
/*   Updated: 2016/12/08 10:35:11 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}


void	ft_print_binary(void *data, size_t size)
{
	int		i;

	i = 0;

	while(size--)
	{
		i = 0;
		while(i < 8)
		{
			if(*((unsigned char*)data + size)  & (128 >> i))
				ft_putchar('1');
			else
				ft_putchar('0');
			i++;
		}
		ft_putchar(' ');
	}
}

int		main(void)
{
	long long i = 0;
	i = i | ((long long)(1 << 0X20));
	ft_print_binary(&i, sizeof(i));
	return (0);
}

















