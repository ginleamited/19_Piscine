#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;
	int found;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			found = 0;
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					found = 1;
					break;
				}
				j++;
			}
			if (!found)
			{
				write (1, "\n", 1);
				return (0);
			}
			i++;
		}

		i = 0;
		j = 0;
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{	
					write (1, &av[1][i], 1);
					i++;
					break;
				}
				j++;
			}
		}
		write (1, "\n", 1);
	}
	else
	{
		write (1, "\n", 1);
	}
	return (0);
}
