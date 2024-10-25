/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:25:20 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:18:16 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	// i is the index of the first character and j 
	// is the index of the last character.
	int	temp;

	i = 0;
	j = size - 1;
	// minus 1 because the index begin with a 0
	while (i < j) 
	// stop the loop when i arrives to j
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		// swap the characters
		i++;
		j--;
	}
}
// #include <stdio.h>

// int main()
// {
// 	int tab[] = {'1','2','3','4','5','6','7','8','9'};
// 	ft_rev_int_tab(tab, 9);
// 	int i;

// 	i = 0;
// 	while (i < 9)
// 	{
// 		printf("%d, ", tab[i] -= 48);
// 		i++;
// 	}
// }
// -= 48 because 1 to 9 we took the ascii number of it and 
// reversed it and became 49 to 58. so to output 9 to 1 do 
// minus 48 which is the ascii of 0
