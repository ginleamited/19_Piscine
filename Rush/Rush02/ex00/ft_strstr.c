/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerri- <mguerri-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:44:21 by mguerri-          #+#    #+#             */
/*   Updated: 2024/07/21 23:04:23 by mguerri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rushlib.h"

void	ft_parser(char *str, long i)
{
	while (str[i] != '\n')
	{
		while ((str[i] >= '0' && str[i] <= '9'))
			i ++;
		if (str[i] == ':')
			i++;
		if (str[i] == 32 && str[i - 1] != 32 && str[i - 1] != ':')
			write (1, &str[i], 1);
		else if (str[i] != 32)
			write (1, &str[i], 1);
		i ++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	long	i;
	long	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] && to_find[j] == str[i + j])
			j ++;
		if (to_find[j] == '\0')
		{
			ft_parser(str, i);
			return (0);
		}
		else
		{
			j = 0;
			i ++;
		}
	}
	write (1, "Dict Error", 10);
	return (PARSING_ERROR);
}
