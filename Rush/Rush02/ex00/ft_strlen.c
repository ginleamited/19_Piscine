/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerri- <mguerri-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:28:46 by mguerri-          #+#    #+#             */
/*   Updated: 2024/07/21 18:28:56 by mguerri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Calculates lenght of the string.*/
int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str != '\0')
	{
		lenght++;
		str++;
	}
	return (lenght);
}
