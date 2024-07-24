/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:25:20 by jilin             #+#    #+#             */
/*   Updated: 2024/07/11 17:33:29 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
#include <stdio.h>

int main()
{
	int tab[] = {'1','2','3','4','5','6','7','8','9'};
	ft_rev_int_tab(tab, 9);
	int i;

	i = 0;
	while (i < 9)
	{
		printf("%d, ", tab[i] -= 48);
		i++;
	}
}
*/
