/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:32:04 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/09 20:21:16 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int c, char **v)
{
	int		i;
	int		j;
	char	*swp;

	i = 0;
	while (++i < c)
	{
		j = i;
		while (++j < c)
		{
			if (ft_strcmp(v[i], v[j]) < 0)
			{
				swp = v[j];
				v[j] = v[i];
				v[i] = swp;
			}
		}
	}
	while (--c > 0)
		ft_putstr(v[c]);
}
