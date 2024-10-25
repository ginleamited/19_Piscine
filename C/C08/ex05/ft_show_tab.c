#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		 ft_putchar(nb + 48);
}

void	ft_show_tab(struct s_stock_str *par)
// Cette fonction affiche les informations d'un tableau 
// de structures s_stock_str.

{
	int	index;

	index = 0;
	while (par[index].str != 0)
	// Boucle qui parcourt chaque structure tant que str n'est pas NULL.
	{
		ft_putstr(par[index].str);
		// afficher la chaine originale
		ft_putstr("\n");
		ft_putnbr(par[index].size);
		// afficher la longueur de la chiane
		ft_putstr("\n");
		ft_putstr(par[index].copy);
		// affiche la copie
		ft_putstr("\n");
		index++;
	}
}
/*
#include "../ex04/ft_strs_to_tab.c"

int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}
*/
