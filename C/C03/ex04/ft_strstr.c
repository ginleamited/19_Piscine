/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:40:10 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:25:15 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*(ft_strstr(char *str, char *to_find))
// locates the first occurrence of the null-terminated 
// string needle in the null-terminated string haystack
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*	
#include <stdio.h>
#include <string.h>

int main()
{	
	char str [] = "lol je m'appelle jin";
	char to_find [] = "je";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
}
*/
