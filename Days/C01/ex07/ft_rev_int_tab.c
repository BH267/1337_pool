/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:53:00 by habenydi          #+#    #+#             */
/*   Updated: 2024/06/29 21:29:37 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	swp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swp = *(tab + start);
		*(tab + start) = *(tab + end);
		*(tab + end) = swp;
		start++;
		end--;
	}
}
