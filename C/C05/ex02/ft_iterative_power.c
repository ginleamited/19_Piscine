/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:17:19 by jilin             #+#    #+#             */
/*   Updated: 2024/07/16 16:04:57 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb_depart;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb_depart = nb;
	while (power > 1)
	{
		nb = nb * nb_depart;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_power(3, 3));
	return (0);
}
*/
