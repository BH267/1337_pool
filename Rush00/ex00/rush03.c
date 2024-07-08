/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:26:28 by habenydi          #+#    #+#             */
/*   Updated: 2024/06/30 09:39:41 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int i, int j, int x, int y)
{
	if (i == 1 || i == y)
	{
		if (j == 1)
			ft_putchar('A');
		else if (j == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 1 || j == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			ft_print_line(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
