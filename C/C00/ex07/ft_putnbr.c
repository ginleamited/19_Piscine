/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:53:22 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:19:24 by jilin            ###   ########.fr       */
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
	// in recursion, the function keeps calling 
	// itself until it reaches a base case 
	// (a condition where it stops further recursive calls). 
	// After reaching the base case, the function starts "returning" 
	// from those recursive calls in reverse order, printing each 
	// digit as it comes back up.
}
/*
int	main(void)
{
	ft_putnbr(-2000000000);
}
*/
