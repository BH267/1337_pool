/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:09:32 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/17 15:44:33 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*p;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = malloc(size * sizeof(int));
	if (!p)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
		p[i++] = min++;
	*range = p;
	return (size);
}
