#include "ft.h"

int     ft_isprint(int c)
{
    if(c <='~' && c >= ' ')
	return (1);
    return (0);
}
