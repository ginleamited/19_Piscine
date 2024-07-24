/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 23:05:29 by jilin             #+#    #+#             */
/*   Updated: 2024/07/16 14:45:04 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_error(void)
{
	int		i;
	char	*error;

	i = 0;
	error = "Insert a valid input\n";
	while (error[i] != '\0')
	{
		ft_putchar(error[i]);
		i++;
	}
}

void	ft_top_function(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('o');
		else if (i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	ft_middle_function(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	ft_bottom_function(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('o');
		else if (i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 1;
	if (x <= 0 || y <= 0)
		ft_error();
	else
	{
		while (j <= y)
		{
			if (j == 1)
				ft_top_function(x);
			else if (j == y)
				ft_bottom_function(x);
			else
				ft_middle_function(x);
			j++;
		}
	}
}
