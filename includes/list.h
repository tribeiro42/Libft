/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 21:04:38 by tribeiro          #+#    #+#             */
/*   Updated: 2017/01/14 21:10:49 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIST_H
# define	LIST_H

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;


t_list				*ft_create_elem(void *content, size_t size);
void				ft_list_push_back(t_list **begin_list, void *data, size_t size);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lst_sort_content(t_list *lst, int (*cmp)());

#endif
