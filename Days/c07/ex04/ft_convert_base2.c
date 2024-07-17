/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:56:08 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/16 14:46:37 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_bcheck(char *base, int blen)
{
	int	i;
	int	j;

	if (blen <= 1)
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (9 <= base[i] && base[i] <= 13))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_returnit(char *str, int blen, char *base, int i)
{
	int	r;
	int	s;

	s = 0;
	while (str[i])
	{
		r = 0;
		while (base[r])
		{
			if (str[i] == base[r])
				s = s * blen + r;
			r++;
		}
		i++;
	}
	return (s);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	blen;
	int	sign;

	i = 0;
	sign = 1;
	blen = 0;
	while (base[blen])
		blen++;
	if (ft_bcheck(base, blen))
		return (0);
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	return (ft_returnit(str, blen, base, i) * sign);
}
