/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bignumber_manager.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerri- <mguerri-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 21:13:52 by mguerri-          #+#    #+#             */
/*   Updated: 2024/07/21 22:33:07 by mguerri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rushlib.h"

int	ft_index_finder(int len)
{
	int	index;

	if (len % 3 == 2)
		len ++;
	else if (len % 3 == 1)
		len += 2;
	index = (len / 3) - 2;
	return (index);
}

void	manager_helper3(char *dictionary, char *str, char **list, int len)
{
	int	index;

	if (len % 3 == 0)
	{
		if (ft_strcmp(ft_strdup_beg(str, 3), "000") != 0)
		{
			dictionary_feeder(dictionary, ft_strdup_beg(str, 3));
			write (1, " ", 1);
			index = ft_index_finder(len);
			ft_strstr(dictionary, list[index]);
			write (1, " ", 1);
		}
		bignumb_manager(dictionary, ft_strdup_rest(str, 3, (len - 3)));
	}
}

void	manager_helper2(char *dictionary, char *str, char **list, int len)
{
	int	index;

	if (len % 3 == 2)
	{
		if (ft_strcmp(ft_strdup_beg(str, 2), "00") != 0)
		{
			dictionary_feeder(dictionary, ft_strdup_beg(str, 2));
			write (1, " ", 1);
			index = ft_index_finder(len);
			ft_strstr(dictionary, list[index]);
			write (1, " ", 1);
		}
		bignumb_manager(dictionary, ft_strdup_rest(str, 2, (len - 2)));
	}
}

void	manager_helper1(char *dictionary, char *str, char **list, int len)
{
	int	index;

	if (len % 3 == 1)
	{
		if (ft_strcmp(ft_strdup_beg(str, 1), "0") != 0)
		{
			dictionary_feeder(dictionary, ft_strdup_beg(str, 1));
			write (1, " ", 1);
			index = ft_index_finder(len);
			ft_strstr(dictionary, list[index]);
			write (1, " ", 1);
		}
		bignumb_manager(dictionary, ft_strdup_rest(str, 1, (len - 1)));
	}
}

void	bignumb_manager(char *dictionary, char *str)
{
	char	*list[11];
	int		len;

	len = ft_strlen(str);
	ft_getlist(list);
	if (str[len - 1] == 48 && str[len - 2] == 48
		&& str[len - 3] == 48 && len == 3)
		return ;
	if (len <= 3)
		dictionary_feeder(dictionary, str);
	else
	{
		if (len % 3 == 1)
			manager_helper1(dictionary, str, list, len);
		else if (len % 3 == 2)
			manager_helper2(dictionary, str, list, len);
		else
			manager_helper3(dictionary, str, list, len);
	}
}
