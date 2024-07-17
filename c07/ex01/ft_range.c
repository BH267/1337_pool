/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:23:56 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/16 09:19:06 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	ptr = malloc((max - min) * sizeof(int));
	if (ptr == NULL )
		return (0);
	i = 0;
	while (min < max)
		ptr[i++] = min++;
	return (ptr);
}
