/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:36:47 by jilin             #+#    #+#             */
/*   Updated: 2024/07/16 16:19:02 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_factorial(-3));
	return (0);
}
*/
