/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:47:26 by jilin             #+#    #+#             */
/*   Updated: 2024/07/14 12:17:21 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	div;

	div = nb;
	if (div < 0)
	{
		ft_putchar('-');
		div = -div;
	}
	if (div > 9)
		ft_putnbr(div / 10);
	nb = div % 10;
	ft_putchar(nb + 48);
}
/*
int	main(void)
{
	ft_putnbr(-919898989);
}
*/
