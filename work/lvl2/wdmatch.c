#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	
	while (str[i])
		i++;
	return (i);
}

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main (int ac, char **av)
{
	int i;
	int j;
	int len;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		len = ft_strlen(av[1]);
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			j++;
		}
		if (i == len)
			ft_putstr(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
