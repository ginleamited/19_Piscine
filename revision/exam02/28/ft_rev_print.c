int ft_strlen(*str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_rev_print(char *str)
{

