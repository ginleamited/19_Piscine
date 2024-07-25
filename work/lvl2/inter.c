#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int found(char c, char *s2)
{
	while (*s2)
	{
		if (*s2 == c)
			return 1;
		s2++;
	}
	return (0);
}

void inter(char *s1, char *s2)
{
	while (*s1)
	{
		if (found(*s1, s2))
			ft_putchar(*s1);
		s1++;
	}
}

int main (int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
