/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerri- <mguerri-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:29:44 by mguerri-          #+#    #+#             */
/*   Updated: 2024/07/21 22:47:53 by mguerri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rushlib.h"

int	ft_is_this_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i ++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_is_this_valid(argv[1]) == 1 && ft_strlen(argv[1]) <= 39)
			operational_splitter1(argc, argv);
		else if (ft_strlen(argv[1]) > 39)
			write (1, "Dict Error", 10);
		else
			write (1, "Error", 6);
	}
	if (argc == 3)
	{
		if (ft_is_this_valid(argv[2]) == 1 && ft_strlen(argv[2]) <= 39)
			operational_splitter2(argc, argv);
		else if (ft_strlen(argv[2]) > 39)
			write (1, "Dict Error", 10);
		else
			write (1, "Error", 6);
	}
	write (1, "\n", 1);
	return (0);
}
