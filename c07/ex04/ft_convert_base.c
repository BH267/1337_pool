/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:45:28 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/16 15:55:17 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_bcheck(char *str);
int	ft_atoi_base(char *nbr, char *base);

char	*ft_ret(int nbr, int len, int size, char *base)
{
	char	*p;

	p = malloc(size + 1);
	if (!p)
		return (NULL);
	p[size] = '\0';
	if (nbr == 0)
		p[0] = base[0];
	else if (nbr < 0)
		p[0] = '-';
	if (nbr % len < 0)
		nbr *= -1;
	while (nbr)
	{
		p[--size] = base[nbr % len];
		nbr /= len;
	}
	return (p);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		len;
	int		temp;
	int		size;

	len = ft_strlen(base);
	temp = nbr;
	size = 0;
	if (nbr <= 0)
		size = 1;
	while (temp)
	{
		temp /= len;
		size++;
	}
	return (ft_ret(nbr, len, size, base));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	n;

	if (!ft_bcheck(base_from) || !ft_bcheck(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(n, base_to));
}
