/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:52:15 by jilin             #+#    #+#             */
/*   Updated: 2024/07/21 16:57:26 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capflag;

	i = 0;
	capflag = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capflag == 1)
				str[i] -= 32;
			capflag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capflag = 0;
		else
			capflag = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	str [] = "salut, comment tu vas ? 42mots quarante-cinquante+e";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/
