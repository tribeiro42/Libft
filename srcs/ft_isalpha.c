#include "ft.h"

int     ft_isalpha(int c)
{
    if(c >= 'A' && c <= 'Z')
	return (1);
    if(c >= 'a' && c <= 'z')
	return (1);
    return (0);
}
