/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 00:27:32 by jilin             #+#    #+#             */
/*   Updated: 2024/07/23 13:23:28 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcpy(char *dest, char *src, int *count)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*count] = src[i];
		i++;
		(*count)++;
	}
	dest[*count] = '\0';
	return (*count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*result;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		if (i < size - 1)
			count += ft_strlen(sep);
		i++;
	}
	result = malloc(sizeof(char) * (count + 1));
	i = 0;
	count = 0;
	while (i < size)
	{
		ft_strcpy(result, strs[i], &count);
		if (i < size - 1)
			ft_strcpy(result, sep, &count);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int main()
{
	char *strs[] = {"HELLO", "WORLD"};
	char sep[] = "SEP";
	char *result;

	result = ft_strjoin(2, strs, sep);
	printf("%s\n", result);
	return (0);
}
*/
