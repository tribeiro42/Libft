#include "ft.h"
#include <stdio.h>

char	*ft_strstr(const char *s, const char *to_find)
{
    char *cp;
    char *s1;
    char *s2;

    cp = (char *) s;

    if(!*to_find)
	return (char *) s;
    while(*cp)
    {
        s1 = cp;
	s2 = (char *) to_find;
	while(*s1 && *s2 && !(*s1 - *s2))
	{
	    s1++;
	    s2++;
	}
	if(!*s2)
	    return (cp) ;
	cp++;
    }
    return (NULL);
}
