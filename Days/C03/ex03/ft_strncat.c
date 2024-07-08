/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:12:22 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/07 19:43:10 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dest + j))
		j++;
	while (i < nb && *(src + i))
	{
		*(dest + j + i) = *(src + i);
		i++;
	}
	*(dest + j + i) = '\0';
	return (dest);
}
