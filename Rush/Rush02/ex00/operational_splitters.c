/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operational_splitters.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerri- <mguerri-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:56:19 by mguerri-          #+#    #+#             */
/*   Updated: 2024/07/21 22:53:08 by mguerri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rushlib.h"

void	operational_splitter1(int argc, char **argv)
{
	int		file_descriptor;
	long	read_bytes;	
	char	dictionary[4096];

	if (argc == 2)
	{
		file_descriptor = open("numbers.dict", O_RDONLY);
		if (file_descriptor != -1)
		{
			read_bytes = read(file_descriptor, dictionary, 4095);
			dictionary[read_bytes] = '\0';
			if (ft_strlen(argv[1]) <= 3)
				dictionary_feeder(dictionary, argv[1]);
			else
				bignumb_manager(dictionary, argv[1]);
		}
		if (file_descriptor == -1)
			write (1, "Dictionary not found.", 21);
		close (file_descriptor);
	}
}

void	operational_splitter2(int argc, char **argv)
{
	int		file_descriptor;
	long	read_bytes;
	char	dictionary[4096];

	if (argc == 3)
	{
		file_descriptor = open(argv[1], O_RDONLY);
		if (file_descriptor != -1)
		{
			read_bytes = read(file_descriptor, dictionary, 4095);
			dictionary[read_bytes] = '\0';
			if (ft_strlen(argv[2]) <= 3)
				dictionary_feeder(dictionary, argv[2]);
			else
				bignumb_manager(dictionary, argv[2]);
		}
		if (file_descriptor == -1)
			write (1, "Dictionary not found.", 21);
		close (file_descriptor);
	}
}
