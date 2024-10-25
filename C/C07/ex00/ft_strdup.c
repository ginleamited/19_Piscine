/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:55:54 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:27:10 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (0);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = ft_strlen(src);
	// determiner longueur max de source
	dup = (malloc(sizeof(char) * (i + 1)));
	//  alloc space in dup using the function malloc
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, src);
	// strcpy src dans dup
	return (dup);
}
/*
#include <stdio.h>

int main ()
{
	char src [] = "abc";
	char* dest;
	dest = ft_strdup(src);
	printf("%s", ft_strdup(dest));
	return (0);
}
*/
