int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "a\n", 2);
	return (0);
}
