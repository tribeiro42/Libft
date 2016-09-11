/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 21:49:50 by tribeiro          #+#    #+#             */
/*   Updated: 2016/08/06 09:19:31 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "srcs/ft.h"
#include "test/fun.h"

#include <stdlib.h>
int	main(int ac, char **av)
{
    
    fun_strstr(av);
    (void)ac;
    //fun_atoi(av);
    fun_string(av);
    
    return 0;
}
