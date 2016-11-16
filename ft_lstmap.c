/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:22:46 by tribeiro          #+#    #+#             */
/*   Updated: 2016/11/14 20:47:12 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;

	tmp = NULL;
	new = NULL;
	if (!lst)
		return (NULL);
	tmp = f(lst);
	new = tmp;
	while (lst)
	{
		lst = lst->next;
		tmp->next = f(lst);
		tmp = tmp->next;
	}
	return (new);
}

/*

  t_list*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
t_list *new;
t_list *tmp;

new = NULL;
if (lst && f)
{
new = f(lst);
tmp = new;
while (lst->next)
{
tmp->next = (*f)(lst->next);
tmp = tmp->next;
lst = lst->next;
}
}
return (new);
}*/
