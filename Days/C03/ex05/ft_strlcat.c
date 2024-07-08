/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:02:20 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/07 10:33:49 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lend;
	unsigned int	lens;
	unsigned int	i;

	lend = 0;
	while (dest[lend] && lend < size)
		lend++;
	lens = 0;
	while (src[lens])
		lens++;
	if (lend == size)
		return (size + lens);
	i = 0;
	while (lend + i < size - 1 && src[i])
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lend + lens);
}
