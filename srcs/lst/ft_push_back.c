#include "libft.h"

void	ft_list_push_back(t_list **begin_list, void *data, size_t size)
{
	t_list		*ptr;

	ptr = NULL;
	if (!(*begin_list))
		*begin_list = ft_create_elem(data, size);
	else
	{
			ptr = (*begin_list);
			while (ptr->next != 0)
				ptr = ptr->next;
			ptr->next = ft_create_elem(data, size);
	}
}
