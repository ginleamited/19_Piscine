/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:52:17 by jilin             #+#    #+#             */
/*   Updated: 2024/07/16 15:00:18 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
		nb = -nb;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(48 + nb);
	}
}

void	ft_printab(int **tab, int size, char *conditions)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		ft_putchar(conditions[16 + (i * 2)]);
		ft_putchar(' ');
		j = 0;
		while (j < size)
		{
			ft_putnbr(tab[i][j]);
			if (j < size - 1)
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar(' ');
		ft_putchar(conditions[24 + (i * 2)]);
		ft_putchar('\n');
		i++;
	}
}

void	debut_arg(char *conditions)
{
	int	i;

	i = 0;
	ft_putchar(' ');
	ft_putchar(' ');
	while (i < 7)
	{
		ft_putchar(conditions[i]);
		ft_putchar(' ');
		i = i + 2;
	}
	ft_putchar('\n');
}

void	bas_arg(char *conditions)
{
	int	i;

	i = 8;
	ft_putchar(' ');
	ft_putchar(' ');
	while (i < 15)
	{
		ft_putchar(conditions[i]);
		ft_putchar(' ');
		i = i + 2;
	}
	ft_putchar('\n');
}

int	**create_tab(int size, int **tab)
{
	int	i;
	int	j;

	i = 0;
	tab = malloc (sizeof(int*) * size);
	if (tab == NULL)
	{	
		return 0;
	}
	i = 0;
	while (i < size)
	{
		tab[i]= malloc(sizeof(int)*size);
		i++;
	}
	i = 0;
	while(i < size)
	{
		j = 0;
		while(j < size)
		{
			tab[i][j]= 0;
			j++;
		}
		i++;
	}
	return tab;
}

int	main (int argc,char **argv)
{
	int	i;
	int	size;
	int	**tab;
	int	count;
	char	*conditions;
	
	size = 4;
	conditions = argv[1];
	tab = create_tab(size,tab);
	// LES CONDITIONS DU TOP
	debut_arg(conditions);
	ft_printab(tab,size,conditions);
	bas_arg(conditions);
	/*
	tab = malloc(sizeof(int*)*size);
	
	if(tab == NULL)
	{
		printf("Malloc ");
		return 0;
	}
	
	i = 0;
	while (i < size)
	{
		tab[i]= malloc(sizeof(int)*size);
		i++;
	}
	count = 0;
	
	*/
	i = 0;
    while (i < size) {
        free(tab[i]);
        i++;
    }
    free(tab);
	return 0;
}
