/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:54:38 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/09 14:25:12 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int c, char **v)
{
	int	i;

	c--;
	while (c > 0)
	{
		i = 0;
		while (v[c][i])
			write(1, &v[c][i++], 1);
		write(1, "\n", 1);
		c--;
	}
}
