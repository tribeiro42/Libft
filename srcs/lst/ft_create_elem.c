#include "libft.h"

t_list		*ft_create_elem(void *content, size_t size)
{
	t_list		*elem;

	elem = NULL;
	if(!(elem = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if(!(elem->content = malloc(size)))
		return (NULL);
	ft_memcpy(elem->content, content, size);
	elem->content_size = size;
	elem->next = NULL;
	return (elem);
}
