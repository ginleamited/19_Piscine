/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerri- <mguerri-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:27:13 by mguerri-          #+#    #+#             */
/*   Updated: 2024/07/21 20:01:00 by mguerri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rushlib.h"

char	*ft_itoa(long nb)
{
	char	*str;
	long	n;
	long	i;

	n = nb;
	i = ft_numlen(n);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (0);
	str[i] = '\0';
	i --;
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n /= 10;
		i--;
	}
	return (str);
}
