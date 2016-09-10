
int	ft_strlen(char const *str)
{
    int		size;

    size = 0;
    while (str[size])
	size++;
    return (size);
}
