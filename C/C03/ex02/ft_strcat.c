/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:00:52 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:24:11 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
// append a copy of the null-terminated string s2 to the end
// of the null-terminated string s1, then add a terminating `\0'.
// The string s1 must have sufficient space to hold the result.
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
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
#include <string.h>

int main()
{
	char dest[] = "salut";
	char src[] = "hello";
	printf("%s", ft_strcat(dest, src));
	printf("%s", strcat(dest, src));
}
*/
