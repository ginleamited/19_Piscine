/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:16:11 by jilin             #+#    #+#             */
/*   Updated: 2024/07/20 18:01:31 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	sorted;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				sorted = 0;
			}
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h>

int main()
{
	int tab[] = {1, 5, 4, 6};
	int size = sizeof(tab) / sizeof(tab[0]);

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]);
	return (0);
}
*/
