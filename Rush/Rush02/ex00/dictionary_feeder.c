/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary_feeder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerri- <mguerri-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:01:43 by mguerri-          #+#    #+#             */
/*   Updated: 2024/07/21 21:59:34 by mguerri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rushlib.h"

void	feeder_helper2(char *dictionary, int nb)
{
	int	xx;
	int	dv;

	if (nb < 1000)
	{
		dv = nb / 100;
		xx = nb % 100;
		ft_strstr(dictionary, ft_itoa(dv));
		write (1, " ", 1);
		ft_strstr(dictionary, "100");
		write (1, " ", 1);
		dictionary_feeder(dictionary, ft_itoa(xx));
	}
}

void	feeder_helper1(char *dictionary, int nb)
{
	int	xx;
	int	dv;

	if (nb > 20 && nb < 100)
	{
		xx = nb % 10;
		nb -= xx;
		ft_strstr(dictionary, ft_itoa(nb));
		write (1, " ", 1);
		ft_strstr(dictionary, ft_itoa(xx));
	}
	else if (nb < 1000 && nb % 100 == 0)
	{
		dv = nb / 100;
		ft_strstr(dictionary, ft_itoa(dv));
		write (1, " ", 1);
		ft_strstr(dictionary, "100");
	}
}

void	dictionary_feeder(char *dictionary, char *str)
{
	long	nb;

	nb = ft_atoi(str, dictionary);
	while (str[0] == '0')
	{
		str[0] = str[1];
		str[1] = str[2];
		str[2] = '\0';
	}
	if ((nb <= 20) || (nb < 100 && nb % 10 == 0))
		ft_strstr(dictionary, str);
	else if (nb > 20 && nb < 100)
		feeder_helper1 (dictionary, nb);
	else if (nb < 1000 && nb % 100 == 0)
		feeder_helper1 (dictionary, nb);
	else if (nb < 1000)
		feeder_helper2 (dictionary, nb);
}
