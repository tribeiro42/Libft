
#include <unistd.h>
#include "ft.h"

void	ft_putendl(char const *s)
{
    write(1, s, ft_strlen(s));
    write(1, "\n", 1);
}
