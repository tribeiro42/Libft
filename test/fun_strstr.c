#include "fun.h"

void	fun_strstr(char **argv)
{
    printf("StrStr  :%s\n", strstr(argv[1], argv[2]));
    printf("FT_StrStr  :%s\n", ft_strstr(argv[1], argv[2]));
}
