
#include "ft.h"

char	*ft_strtrim(char const *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if(ft_isdel(s[i]))
			return (NULL);
		i++;

}
