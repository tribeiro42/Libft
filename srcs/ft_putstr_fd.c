#include <unistd.h>
#include "ft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if(s && fd > 0)
		write(fd, s, ft_strlen(s));
}
