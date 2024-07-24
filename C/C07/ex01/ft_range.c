/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:51:39 by jilin             #+#    #+#             */
/*   Updated: 2024/07/23 13:21:54 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = malloc(sizeof(int) * (max - min));
	if (!dest)
		return (NULL);
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	int *result;
	int i;
	int min;
	int max;
   
	min = 0;
	max = 10;
	i = 0;
	result = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
}
*/