/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:52:15 by jilin             #+#    #+#             */
/*   Updated: 2024/10/25 17:15:25 by jilin            ###   ########.fr       */
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
	// means that the very first character of the string 
	// (if it is an alphabetic character) should be capitalized.
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capflag == 1)
				str[i] -= 32;
			capflag = 0;
			// sets to 0 because after capitalizing (or encountering 
			// a lowercase letter), the subsequent characters in the 
			// current word should remain lowercase until a new word starts.
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capflag = 0;
			// If the character is a digit:
			// Sets to 0 because digits do not signify the start of a new word.
		else
			capflag = 1;
			// If the character is any other character (like a space, punctuation, etc.):
			// Sets to 1, indicating that the next alphabetic character should 
			// be capitalized. This is because such characters usually separate words.
		i++;
	}
	return (str);
}
// capflag acts as a flag to control whether the next alphabetic 
// character should be capitalized.It is set to 1 at the 
// start and after any non-alphanumeric character 
// (indicating a new word should start).

// sets to 0 because after capitalizing (or encountering 
// a lowercase letter), the subsequent characters in the 
// current word should remain lowercase until a new word starts.
/*
#include <stdio.h>

int	main()
{
	char	str [] = "salut, comment tu vas ? 42mots quarante-cinquante+e";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/
