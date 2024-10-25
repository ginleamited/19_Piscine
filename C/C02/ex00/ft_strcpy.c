/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:49:32 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:16:00 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	// '\0' a mettre pour terminer le string avec un NULL terminator
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char	dest[] = "ouaisssss cest bon";
	char	src[] = "non non cest pas bon";
	ft_strcpy(dest, src);
	printf("destination: %s\n", dest);
}
*/
