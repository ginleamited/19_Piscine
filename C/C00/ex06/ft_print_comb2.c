/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:06:31 by jilin             #+#    #+#             */
/*   Updated: 2024/07/20 17:53:37 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	division_mod(char c)
{
	int	i;

	i = (c / 10) + 48;
	write(1, &i, 1);
	i = (c % 10) + 48;
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			division_mod(a);
			write(1, " ", 1);
			division_mod(b);
			if (a <= 97)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int main()
{
	ft_print_comb2();
	return (0);
}
*/
