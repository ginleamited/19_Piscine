/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:54:06 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:36:13 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = ft_strlen(src);
	dup = (malloc(sizeof(char) * (i + 1)));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
// il vient du fichier .h
{
	int					i;
	t_stock_str	*array;

	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		// Stocke la longueur de la chaîne.
		array[i].str = av[i];
		// Stocke le pointeur vers la chaîne originale.
		array[i].copy = ft_strdup(av[i]);
		// Crée et stocke une copie de la chaîne.
		i++;
	}
	array[i].str = 0;
	// marquer la fin du tableau
	array[i].copy = 0;
	// marquer la fin du tableau
	return (array);
	// retourner le tableau
}
