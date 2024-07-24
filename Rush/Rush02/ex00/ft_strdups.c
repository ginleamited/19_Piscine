/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdups.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerri- <mguerri-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:32:59 by mguerri-          #+#    #+#             */
/*   Updated: 2024/07/21 19:20:37 by mguerri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rushlib.h"

char	*ft_strcpy_rest(char *dest, char *src, int k, int len)
{
	int	j;
	int	i;

	j = 0;
	i = k;
	while (len > 0)
	{
		dest[j] = src[i];
		j ++;
		i ++;
		len --;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strdup_rest(char *src, int k, int len)
{
	char	*dst;

	dst = malloc(ft_strlen(src) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy_rest(dst, src, k, len);
	return (dst);
}

char	*ft_strcpy_beg(char *dest, char *src, int k)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (j < k)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strdup_beg(char *src, int i)
{
	char	*dst;

	dst = malloc(i * sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_strcpy_beg(dst, src, i);
	return (dst);
}
