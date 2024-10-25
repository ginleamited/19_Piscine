/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:44:26 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:21:18 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
// compares not more than n characters
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
	// - 1 because, the return is running after the i++. and 
	// because when we set n is 4, the i will count till index 
	// 4 but what we want is index 3. this is why the i should 
	// loop until it atteign the index 3.
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s1 [] = "coocou";
	char s2 [] = "coucou";
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%d\n", strncmp(s1, s2, 4));
}
*/
