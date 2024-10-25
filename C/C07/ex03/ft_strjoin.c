/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 00:27:32 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:34:31 by jilin            ###   ########.fr       */
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
// *count car pointeur count sur int pcq on a besoin 
// que ca synchronise dans strjoin
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*count] = src[i];
		// on met des * pour deferencer et annuler le pointeur 
		// pcq on a pas besoin d utiliser le pointeur, c est 
		// juste pour synchro avec strjoin
		i++;
		(*count)++;
	}
	dest[*count] = '\0';
	return (*count);
	// return un int, pour utiliser le int dans strjoin
}

char	*ft_strjoin(int size, char **strs, char *sep)
// size for how much words
{
	int		i;
	int		count;
	// on declare int count pour compter chaque char
	char	*result;
	// on declare result pour l espace alloue avec malloc

	i = 0;
	// on commence par 0 pour compter le nombre de mot
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		// on incremente count avec chaque lettres de chaque mot pour les compter
		if (i < size - 1)
			count += ft_strlen(sep);
			// on incremente chaque separateur pour les compter
		i++;
	}
	result = malloc(sizeof(char) * (count + 1));
	// +1 pour \0
	i = 0;
	// reinitialise a 0 car on va reutiliser ces parametres
	count = 0;
	// reinitialise a 0 car on va reutiliser ces parametres
	while (i < size)
	{
		ft_strcpy(result, strs[i], &count);
		// pour le &count donc ici vu que le count est synchro 
		// avec le count dans strcpy, on va pas recompter a 
		// partir de l indice 0 mais apres chaque count de lettres
		if (i < size - 1)
			ft_strcpy(result, sep, &count);
			// pour le &count donc c'est pareil mais pour le separateur
		i++;
	}
	return (result);
	// return ce qui est demande
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
