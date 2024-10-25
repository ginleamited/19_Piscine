/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:23:18 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:24:41 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
// append a copy of the null-terminated string s2 to the end
// of the null-terminated string s1, then add a terminating `\0'.
// The string s1 must have sufficient space to hold the result.
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
//#include <string.h>

int main()
{
	char dest [] = "cou";
	char src [] = "asd";
	printf("%s\n", ft_strncat(dest, src, 2));
	//printf("%s", strncat(dest, src, 2));
}
*/
